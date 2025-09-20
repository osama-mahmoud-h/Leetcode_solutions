
class Router {
private:
    struct Packet {
        int source, destination, timestamp;
        int order;
        static int globalCounter;

        Packet(int s, int d, int t) : source(s), destination(d), timestamp(t) {
            order = globalCounter++;
        }
    };

    // FIFO order: first by timestamp, then by insertion order
    struct PacketOrder {
        bool operator()(const Packet& a, const Packet& b) const {
            if (a.timestamp != b.timestamp) return a.timestamp < b.timestamp;
            return a.order < b.order;
        }
    };

    // Key for uniqueness check
    struct PacketKey {
        int source, destination, timestamp;
        bool operator==(const PacketKey& o) const {
            return source == o.source && destination == o.destination && timestamp == o.timestamp;
        }
    };

    struct PacketKeyHash {
        size_t operator()(const PacketKey& k) const {
            return ((size_t)k.source << 32) ^ ((size_t)k.destination << 16) ^ k.timestamp;
        }
    };

    int memory_limit;
    std::set<Packet, PacketOrder> packets;                 // global FIFO order
    std::unordered_set<PacketKey, PacketKeyHash> unique;   // uniqueness check
    std::unordered_map<int, vector<int>> destTimes;        // timestamps per destination
    std::unordered_map<int, int> processed;                // forwarded count per destination

public:
    Router(int memoryLimit) : memory_limit(memoryLimit) {}

    bool addPacket(int source, int destination, int timestamp) {
        PacketKey key{source, destination, timestamp};
        if (unique.count(key)) return false; // duplicate

        if ((int)packets.size() >= memory_limit) {
            forwardPacket(); // evict oldest
        }

        Packet p(source, destination, timestamp);
        packets.insert(p);
        unique.insert(key);
        destTimes[destination].push_back(timestamp);
        return true;
    }

    vector<int> forwardPacket() {
        if (packets.empty()) return {};

        Packet p = *packets.begin();
        packets.erase(packets.begin());

        PacketKey key{p.source, p.destination, p.timestamp};
        unique.erase(key);

        processed[p.destination]++; // skip forwarded in getCount
        return {p.source, p.destination, p.timestamp};
    }

    int getCount(int destination, int startTime, int endTime) {
        auto it = destTimes.find(destination);
        if (it == destTimes.end()) return 0;
        auto& times = it->second;

        int idx = processed[destination]; // how many forwarded
        auto low = lower_bound(times.begin() + idx, times.end(), startTime);
        auto high = upper_bound(times.begin() + idx, times.end(), endTime);
        return high - low;
    }
};

// define static counter
int Router::Packet::globalCounter = 0;
class RandomizedCollection {
private:
    unordered_map<int, unordered_set<int>> mp;
    vector<int> arr;

public:
    RandomizedCollection() {}

    bool insert(int val) {
        bool isNew = mp[val].empty();
        mp[val].insert(arr.size());
        arr.push_back(val);
        return isNew;   // false if duplicate
    }

    bool remove(int val) {
        if (mp[val].empty()) return false;

        // get an index of val to remove
        int idx = *mp[val].begin();
        mp[val].erase(idx);

        int lastVal = arr.back();
        arr[idx] = lastVal;

        // update index of lastVal
        mp[lastVal].erase(arr.size() - 1);
        if (idx < arr.size() - 1) {
            mp[lastVal].insert(idx);
        }

        arr.pop_back();
        return true;
    }

    int getRandom() {
        if (arr.empty()) return -1;
        return arr[rand() % arr.size()];
    }
};

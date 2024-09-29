class AllOne {
private:
    unordered_map<string, int> word_cnts;                        // Map to store the count of each word
    map<int, unordered_set<string>> cnt_words;                   // Map to store words by their counts

public:
    AllOne() { }

    void inc(string key) {
        int cnt = word_cnts[key]++;
        if (cnt > 0) {
            cnt_words[cnt].erase(key);
            if (cnt_words[cnt].empty()) {
                cnt_words.erase(cnt);
            }
        }
        cnt_words[cnt + 1].insert(key);
    }

    void dec(string key) {
        if (word_cnts.find(key) == word_cnts.end()) return;      // If the key doesn't exist, do nothing

        int cnt = word_cnts[key]--;
        cnt_words[cnt].erase(key);
        if (cnt_words[cnt].empty()) {
            cnt_words.erase(cnt);
        }
        if (cnt == 1) {
            word_cnts.erase(key);                                // Remove the word from word_cnts map if its count is zero
        } else {
            cnt_words[cnt - 1].insert(key);
        }
    }

    string getMaxKey() {
        if (cnt_words.empty()) return "";                        // Return empty string if no element exists
        return *cnt_words.rbegin()->second.begin();              // Get an element from the largest count set
    }

    string getMinKey() {
        if (cnt_words.empty()) return "";                        // Return empty string if no element exists
        return *cnt_words.begin()->second.begin();               // Get an element from the smallest count set
    }
};

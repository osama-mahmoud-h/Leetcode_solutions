class Solution {
private:
    bool can_build(const string &current, unordered_map<string, vector<char>> &base_top, unordered_map<string, bool> &memo) {
        if(current.size() == 1) return true; // top reached
        
        if(memo.count(current)) return memo[current]; // return cached result
        
        string next = ""; 
        bool result = dfs_build_next(current, 0, next, base_top, memo);
        return  memo[current] = result;;
    }

    bool dfs_build_next(const string &current, int index, string &next, unordered_map<string, vector<char>> &base_top, unordered_map<string, bool> &memo) {
        if(index == current.size() - 1) {
            // completed next row, recurse
            return can_build(next, base_top, memo);
        }

        string pair = current.substr(index, 2);
        if(base_top.find(pair) == base_top.end()) return false; // no allowed top

        for(char c : base_top[pair]) {
            next.push_back(c); // place top block
            if(dfs_build_next(current, index + 1, next, base_top, memo)) return true;
            next.pop_back(); // backtrack
        }

        return false; 
    }

public:
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        unordered_map<string, vector<char>> base_top;
        for(const string &s : allowed)
            base_top[s.substr(0,2)].push_back(s[2]);

        unordered_map<string, bool> memo; // memoization map
        return can_build(bottom, base_top, memo);
    }
};

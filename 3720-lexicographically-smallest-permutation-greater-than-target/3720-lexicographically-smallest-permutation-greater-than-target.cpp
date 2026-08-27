class Solution {
private:
    void append_rem(multiset<char>& st, string& ans) {
        for (char c : st)
            ans.push_back(c);
    }

public:
    string lexGreaterPermutation(string s, string target) {
        int n = target.size();
        multiset<char> st(s.begin(), s.end());
        string ans;

        for (int i = 0; i < n; ++i) {
            auto it = st.lower_bound(target[i]);

            if (it == st.end()) {
                // We cannot continue matching target.
                // Backtrack.
                for (int j = i - 1; j >= 0; --j) {
                    st.insert(ans[j]);

                    auto bigger = st.upper_bound(target[j]);

                    if (bigger != st.end()) {
                        ans.resize(j);
                        ans.push_back(*bigger);
                        st.erase(bigger);

                        append_rem(st, ans);
                        return ans;
                    }
                }

                return "";
            }

            if (*it > target[i]) {
                ans.push_back(*it);
                st.erase(it);

                append_rem(st, ans);
                return ans;
            }

            // Equal
            ans.push_back(*it);
            st.erase(it);
        }

        // We matched target exactly.
        // Need to backtrack to find the smallest greater permutation.
        for (int j = n - 1; j >= 0; --j) {
            st.insert(ans[j]);

            auto bigger = st.upper_bound(target[j]);

            if (bigger != st.end()) {
                ans.resize(j);
                ans.push_back(*bigger);
                st.erase(bigger);

                append_rem(st, ans);
                return ans;
            }
        }

        return "";
    }
};
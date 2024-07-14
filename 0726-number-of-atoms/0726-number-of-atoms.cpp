
class Solution {
private:
    string extract_atom(int &i, string&s){
        int n = s.size();
        string atom = "";
        atom += s[i++];
        while (i<n and islower(s[i])){
            atom += s[i];
            i++;
        }
        return atom;
    }
    int extract_count(int &i, string&s){
        int n = s.size();
        string num_str = "";
        while(i<n and isdigit(s[i])){
            num_str += s[i];
            i++;
        }
        return num_str.empty() ? 1 : stoi(num_str);
    }
public:
    string countOfAtoms(string formula) {
        stack<unordered_map<string, int>> st;
        st.push(unordered_map<string, int>());
        int i = 0, n = formula.size();;

        while (i<n){
            if (formula[i] == '(') {
                st.push(unordered_map<string, int>());
                i++;
            }else if (formula[i] == ')') {
                unordered_map<string, int> currMap = st.top();
                st.pop();
                int multiplier = extract_count(++i,formula);

                 // multiply each atom in () with  multiplier
                 for (auto& [atom, count] : currMap) {
                     currMap[atom] = count * multiplier;
                 }
                 //append top stack for each another item value .
                for (auto& [atom, count] : currMap) {
                    st.top()[atom] += count;
                }
            }else{//upper case
                string atom_name = extract_atom(i,formula);
                int atom_count = extract_count(i,formula);
                
                st.top()[atom_name] += atom_count;
            }
        }

        map<string, int> finalMap(st.top().begin(), st.top().end());

        // Generate the answer string
        string ans;
        for (auto& [atom, count] : finalMap) {
            ans += atom;
            if (count > 1) {
                ans += to_string(count);
            }
        }

        return ans;

    }
};

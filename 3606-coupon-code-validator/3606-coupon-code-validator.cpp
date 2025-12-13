class Solution {
private:
    const regex pattern{"^[A-Za-z0-9_]+$"};
    bool is_valid_code(string & s){
        return regex_match(s, pattern);
    }
    bool is_valid_category(string & s){
        return std::regex_match(s, regex ("^(electronics|grocery|pharmacy|restaurant)$"));
    }
    unordered_map<string, int> business_line_score = {{"electronics",1},{"grocery", 2},{"pharmacy", 3},{"restaurant",4}};
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,int>> temp_ans;
        int n = code.size();
        for (int i = 0; i < n; ++i) {
            if(!isActive[i] or !is_valid_category(businessLine[i]) or !is_valid_code(code[i]))
                continue;
            temp_ans.push_back({code[i], business_line_score[businessLine[i]]});
        }
        sort(temp_ans.begin(), temp_ans.end(), [&](pair<string,int>&p1, pair<string,int>&p2){
           if(p1.second == p2.second)
               return p1.first < p2.first;
           return p1.second < p2.second;
        });
        vector<string> ans;
        for (const auto &item: temp_ans)
            ans.push_back(item.first);
        return ans;
    }
};
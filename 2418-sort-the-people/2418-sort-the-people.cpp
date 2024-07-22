class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            unordered_map<int,string >map;
    for (int i = 0; i <names.size() ; ++i) {
        map[heights[i]]=names[i];
    }
    sort(heights.rbegin(),heights.rend());
    vector<string>ans;
    
    for(auto i:heights){
        ans.push_back(map[i]);
    }
    return ans;
    }
};
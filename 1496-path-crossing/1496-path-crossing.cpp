class Solution {
    pair<int,int>newPos(pair<int,int>&cur_pos,char dir){
        if(dir == 'N'){
            return {cur_pos.first,cur_pos.second+1};
        } else if(dir == 'S'){
            return {cur_pos.first,cur_pos.second-1};
        } else if(dir == 'E'){
            return {cur_pos.first+1,cur_pos.second};
        } else if(dir == 'W'){
            return {cur_pos.first-1,cur_pos.second};
        }
        return {0,0};
    }
public:
    bool isPathCrossing(string path) {
        unordered_set<string>points;
        pair<int,int>cur_pos = {0,0};
        points.insert("0,0");
        for (const auto &item: path){
            auto new_pos = newPos(cur_pos,item);
            string s = to_string(new_pos.first) + "," + to_string(new_pos.second);
            if(points.find(s) != points.end()){
                return true;
            }
            points.insert(s);
            cur_pos = new_pos;
        }
        return false;
    }
};
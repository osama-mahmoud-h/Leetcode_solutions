class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
             vector<vector<string>>ans;

    unordered_map<string,int> map;
    set<string> foods_set;
    set<int> nums_set;

    for(auto vc:orders){
        nums_set.insert(stoi(vc[1]));
        foods_set.insert(vc[2]);
        map[vc[1]+vc[2]]++;
    }
    
    //convert foods set to vector
    vector<string> foods , nums;
        foods.push_back("Table");
    for(auto i:foods_set){
        foods.push_back(i);
    }
    for(auto i:nums_set){
        nums.push_back(to_string(i));
      //  cout<<i<<"\n";
    }
    
     for(auto i:map){
        // cout<<i.first<<"    "<<i.second<<"\n";
     }   
    ans.push_back(foods);
    
    for(auto num:nums_set){
        vector<string>tmp(1,to_string(num));
        for(auto food:foods_set){
            string snum = to_string(num);
          //  cout<<"---"<<snum<<"\n";
        //    cout<<map[snum+food<<"\n";
            if(map.find(snum+food)==map.end()){
                tmp.push_back("0");
            } else{
               // map[to_string(num)+food];
                tmp.push_back(to_string(map[snum+food]));
            }
           
        }
        ans.push_back(tmp);
        
    }

    return ans;
    }
};
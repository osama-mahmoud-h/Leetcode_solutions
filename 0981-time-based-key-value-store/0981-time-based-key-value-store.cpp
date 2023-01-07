#define FastIo ios::sync_with_stdio(0);cin.tie(0)

class TimeMap {
private:
    unordered_map< string, vector<pair<string,int>> > map;
public:
    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        map[key].push_back({value,timestamp});
    }

    string get(string key, int timestamp) {
        FastIo;
        
//         if(map.find(key)== map.end()){
//             return "";
//         }
      //  vector<pair<string,int>> ar = map[key];
        int l=0,h=map[key].size();
        string ans="";
        
        while (l<h){
            int mid = (l+h)/2;
            if(timestamp>=map[key][mid].second){
                ans=map[key][mid].first;
                l=mid+1;
            } else{
                h=mid;
            }
        }
        return ans;
    }

};

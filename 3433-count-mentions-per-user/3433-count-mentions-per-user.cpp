class Solution {
private:
    void refresh_offline_users(string &current_time_stamp, unordered_map<int , string> & offline_users_at){
            for (auto it = offline_users_at.begin(); it != offline_users_at.end(); ) {

                if (stoi(it->second) + 60 <= stoi(current_time_stamp)) {
                    it = offline_users_at.erase(it);   // erase returns next iterator
                } else {
                    ++it;
                }
            }
    }
    void mention_all_users(int n, bool includes_offline, vector<int>& cnts,  unordered_map<int , string> & offline_users){
        for (int i = 0; i < n; ++i) {
            if(!includes_offline and offline_users.count(i))
                continue;
            cnts[i]++;
        }
    }
    void notify_specified_users(string& user_ids, vector<int>& cnts, unordered_map<int , string> & offline_users){
        istringstream iss(user_ids);
        string token;
        while (iss >> token) {
            int user_id = stoi(token.substr(2,token.length()-2));
            //if(offline_users.count(user_id))
            //    continue;
            cnts[user_id]++;
        }
    }
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        
         sort(events.begin(), events.end(),[&](vector<string>&e1 ,vector<string>&e2 ){
            int t1 = stoi(e1[1]), t2 = stoi(e2[1]);
            if(t1==t2)
                return e1[0]=="OFFLINE";
            return t1 < t2;
        });

        vector<int> cnts(numberOfUsers, 0);
        unordered_map<int, string>offline_users_at;

        for (const auto &event: events){
            string event_name = event[0], time_stamp = event[1], mentions_string = event[2];
            if(event_name == "MESSAGE"){
                refresh_offline_users(time_stamp, offline_users_at);
                if(mentions_string == "ALL")
                    mention_all_users(numberOfUsers, 1,cnts,offline_users_at);
                else if(mentions_string == "HERE")
                    mention_all_users(numberOfUsers, 0,cnts,offline_users_at);
                else
                    notify_specified_users(mentions_string, cnts, offline_users_at);
            }else{
                offline_users_at[stoi(mentions_string)] = time_stamp;
            }
        }

        return cnts;
    }
};

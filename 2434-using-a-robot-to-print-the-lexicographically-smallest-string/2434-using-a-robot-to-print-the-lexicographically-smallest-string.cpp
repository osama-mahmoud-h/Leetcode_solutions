class Solution {
public:
    string robotWithString(string s) {
 map<char,int>mp;

    for (int i = 0; i <s.length() ; ++i) {
        mp[s[i]]++;
    }

    int i=0,j=0;
    stack<char>st;
    string ans="";
    char fr = (*(mp.begin())).first;

    while (j<s.size()){
        //cout<<fr<<ln;

        while (!st.empty()&&st.top()<=fr){
            ans+=st.top();
            st.pop();
        }

        if(s[j]==fr){
           // cout<<mp[fr]<<ln;
            if(mp[fr]>0){
                mp[fr]--;
                ans+=fr;
                if(mp[fr]<=0){
                    mp.erase(fr);
                    fr = (*(mp.begin())).first;
                }
            }
        } else{
            st.push(s[j]);
            if(mp.find(s[j])!=mp.end()){
               mp[s[j]]--;
                if(mp[s[j]]<=0){
                    mp.erase(s[j]);
                }
            }
        }

        j++;
    }

    while (!st.empty()){
        ans+=st.top();
        st.pop();
    }
   //
    return ans;
    }
};


/**
"zmbmzbbb a lpo a sshjdsouysd"

"aa ddsyuosjhss opl bbbzmbmz"
[zmbmzbbb lpo ]
aa











*/
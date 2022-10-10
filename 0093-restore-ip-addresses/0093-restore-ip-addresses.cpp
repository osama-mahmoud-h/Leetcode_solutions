class Solution {
public:
    
 vector<string>splitStr(string s,char split){
    string tmp="";
    vector<string>ans;
    for(char c:s){
        if(c==split) {
            if (tmp.length() > 0) {
                ans.push_back(tmp);
                tmp = "";
            }
        }else {
            tmp += c;
        }
    }
    if(tmp.length()>0){
        ans.push_back(tmp);
    }
    return ans;
}
    
bool valid(string ip){
    vector<string>ips= splitStr(ip,'.');
    if(ips.size()<4){
        return 0;
    }
    for (auto st:ips) {
        
        if(stoi(st)>255||(st.length()>1&&st[0]=='0')){
            return 0;
        }
    }
    return 1;
}
void generator(vector<string>&ans,string &s,string ip,int idx,int dots,int curLen){
    if(curLen==s.length()){
           // cout<<ip<<"\n";
        if(valid(ip)){
            ans.push_back(ip);
        }
    }
    if(idx>=s.length()){
        return;
    }

    if(s[idx]=='0'){
        string str = dots<3?"0.":"0";
        generator(ans,s,ip+str,idx+1,dots<3?dots+1:dots,curLen+1);
    } else{
        string str="";
        if(s.length()-idx>=3){
            if(stoi(s.substr(idx,3))<=255){
                str=ip+s.substr(idx,3) + (dots<3?".":"");
                generator(ans,s,str,idx+3,dots<3?dots+1:dots,curLen+3);
            }
        }
        if(s.length()-idx>=2){
            str=ip+s.substr(idx,2) + (dots<3?".":"");
            generator(ans,s,str,idx+2,dots<3?dots+1:dots,curLen+2);
        }
        if(s.length()-idx>=1){
            str=ip+s.substr(idx,1) + (dots<3?".":"");
            generator(ans,s,str,idx+1,dots<3?dots+1:dots,curLen+1);
        }



    }
}
vector<string> restoreIpAddresses(string s) {
    
   vector<string> ans;
    if(s.length()>12){
        return ans;
    }
    unordered_set<string>tmp;
    generator(ans,s,"",0,0,0);
    for (auto st:ans) {
        tmp.insert(st);
    }
    ans.clear();
    for (auto st:tmp) {
        ans.push_back(st);
    }
    return ans;
}
};
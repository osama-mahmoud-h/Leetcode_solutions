class Solution {
public:
    bool closeStrings(string s, string t) {
        
  
    if(s.size()!=t.size()){
        return false;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    vector<int>sFreq(26);
    vector<int>tFreq(26);

    for(auto ch:s)
        sFreq[ch-'a']++;
    for(auto ch:t)
        tFreq[ch-'a']++;

    //check if tow string have the same characters(with or without the same frequencies)
    for (int i = 0; i <26 ; ++i) {
        if((sFreq[i]==0&&tFreq[i]!=0) || (sFreq[i]!=0&&tFreq[i]==0)){
            return false;
        }
    }
    //sort frequencies and if they are not the same return false;
    vector<int>sFreqs;
    vector<int>tFreqs;
    for (int i = 0; i < 26; ++i) {
        if(sFreq[i]!=0)
        sFreqs.push_back(sFreq[i]);

        if(tFreq[i]!=0)
            tFreqs.push_back(tFreq[i]);
    }

    //sort tow freqss
    sort(sFreqs.begin(),sFreqs.end());
    sort(tFreqs.begin(),tFreqs.end());

    if(sFreqs.size()!=tFreqs.size())
        return false;
    for (int i = 0; i < sFreqs.size(); ++i) {
        if(sFreqs[i]!=tFreqs[i])
            return false;
    }

    return 1;
    }
};
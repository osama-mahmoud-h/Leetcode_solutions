class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,vector<int>> word_map;
    unordered_map<char,vector<int>> chars;
    vector<string>words;
    
    for (int i = 0; i < pattern.length(); ++i) {
        chars[pattern[i]].push_back(i);
    }
    
    string word="";
    int i=0;
    for (char c:s) {
        if(c==' '){
            word_map[word].push_back(i++);
            words.push_back(word);
            word="";
            continue;
        }
        word+=c;
    }
    if(word.length()>0){
        words.push_back(word);
        word_map[word].push_back(i);
    }

    if(words.size()!=pattern.length()){
        return 0;
    }
    for (int j = 0; j <pattern.length() ; ++j) {
        char c = pattern[j];
        word =  words[j];
        if(word_map[word].size()!=chars[c].size()){
            return 0;
        }
        for (int k = 0; k < chars[c].size(); ++k) {
            if(word_map[word][k]!=chars[c][k]){
                return 0;
            }
        }
    }
    return 1;
    }
};
class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    bool isInDictionary;

    TrieNode() {
        isEndOfWord = 0;
        isInDictionary = 0;
    }
};

class Trie{
private:
    TrieNode * root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word, bool isInDictionary) {
        TrieNode* currentNode = root;
        for (char ch : word) {
            if (currentNode->children.find(ch) == currentNode->children.end()) {
                currentNode->children[ch] = new TrieNode();
            }
            currentNode = currentNode->children[ch];
        }
        currentNode->isEndOfWord = true;
        currentNode->isInDictionary = isInDictionary;
    }

    string findShortPrefix(string word) {
        TrieNode* currentNode = root;
        string prefix = "";
        for (char ch : word) {
            if (currentNode->children.find(ch) == currentNode->children.end()) {
                return prefix;
            }
            currentNode = currentNode->children[ch];
            prefix.push_back(ch);

            if(currentNode->isEndOfWord && currentNode->isInDictionary){
                return prefix;
            }

        }
        return prefix;
    }

};
class Solution {
private :
    vector<string>split_string(string &s, char separator){
        vector<std::string> result;
        string current;

        for (char ch : s) {
            if (ch == separator) {
                if (!current.empty()) {
                    result.push_back(current);
                    current.clear();
                }
            } else {
                current += ch;
            }
        }

        if (!current.empty()) {
            result.push_back(current);
        }

        return result;
}
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
       Trie trie;
       vector<string> words = split_string(sentence, ' ');
        
       for (const auto &item: words){
            trie.insert(item,0);
       }
       for (const auto &item: dictionary){
            trie.insert(item,1);
       }

        for (int i = 0; i < words.size(); ++i) {
            string prefix = trie.findShortPrefix(words[i]);
            words[i] = prefix;
        }
        string ans = "";
        for (int i = 0; i < words.size()-1; ++i) {
            ans += words[i]+ ' ';
        }
        ans+=words[words.size()-1];
        
        return ans;
        
    }
};
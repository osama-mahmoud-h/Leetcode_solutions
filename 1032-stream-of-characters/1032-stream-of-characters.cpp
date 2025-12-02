
class TrieNode {
public:
    std::unordered_map<char, std::shared_ptr<TrieNode>> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
private:
    std::shared_ptr<TrieNode> root;

    bool isCompleteWord(std::shared_ptr<TrieNode> node) {
        return node != nullptr && node->isEndOfWord;
    }

public:
    Trie() {
        root = std::make_shared<TrieNode>();
    }

    // Insert a word into the trie
    void insert(const std::string& word) {
        std::shared_ptr<TrieNode> current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = std::make_shared<TrieNode>();
            }
            current = current->children[ch];
        }

        current->isEndOfWord = true;
    }

    bool hasPrefixInTrie(const std::string& input) {
        std::shared_ptr<TrieNode> current = root;

        if (isCompleteWord(root)) {
            return true; // Empty string is a valid word and prefix of everything
        }

        for (char ch : input) {
            if (current->children.find(ch) == current->children.end()) {
                return isCompleteWord(current);
            }

            current = current->children[ch];

            if (isCompleteWord(current)) {
                return true;
            }
        }

        return isCompleteWord(current);
    }
    
};


class StreamChecker {
private:
    Trie trie;
    string reversed_stream = "";
public:
    StreamChecker(vector<string>& words) {
        for (auto &word: words){
            reverse(word.begin(), word.end());
            trie.insert(word);
        }
    }

    bool query(char letter) {
        reversed_stream = letter + reversed_stream;
        if(reversed_stream.length()>200)
            reversed_stream.pop_back();
            
        if(trie.hasPrefixInTrie(reversed_stream))
            return true;
        return false;    
    }
};

struct Node{
    char data {'\0'};
    bool isEnd {false};
    unordered_map<char,Node*>childrens;

    explicit Node(char data) : data(data) {}

    Node() {
    }
};
class Trie {
private:
Node *root;
public:
    Trie() {
        root = new Node('0/');
    }

    void insert(string word) {
        if(word.empty()){
            return ;
        }
        Node * cur = root;
        int n = word.length();
        for (const auto &item : word){
            if(!cur->childrens[item]){
                cur->childrens[item] = new Node(item);
            }
            cur = cur->childrens[item];
        }
        cur->isEnd = 1;
    }

    bool search(string word) {
        if(word.empty()){
            return 0;
        }
        Node * cur = root;
        int n = word.length();
        for (const auto &item: word){
            if(!cur->childrens[item]){
                return 0;
            }
            cur = cur->childrens[item];
        }
        
        return cur->isEnd;
    }

    bool startsWith(string prefix) {
        if(prefix.empty()){
            return 0;
        }
        Node * cur = root;
        int n = prefix.length();
        for (const auto &item: prefix){
            if(!cur->childrens[item]){
                return 0;
            }
            cur = cur->childrens[item];
        }
        return 1;
    }
};
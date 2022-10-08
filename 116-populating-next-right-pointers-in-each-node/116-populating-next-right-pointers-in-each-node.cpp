/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)return root;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* frnt = q.front();
                q.pop();
                if(frnt->left!=nullptr){
                   q.push(frnt->left); 
                }
                if(frnt->right!=nullptr){
                    q.push(frnt->right);
                }
                
            }
            
              queue<Node*>tmp=q;
              Node* frnt=tmp.front();
             if(!tmp.empty()) tmp.pop();
            while(!tmp.empty()){
              frnt->next = tmp.front();
              frnt = tmp.front();
               tmp.pop();
            }
        }
        return root;
    }
};










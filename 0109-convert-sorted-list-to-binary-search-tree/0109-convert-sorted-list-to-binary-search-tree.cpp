
class Solution {
private:
    TreeNode * buildTree(ListNode *head, ListNode * tail, int count){
     //   cout<<"st: "<<head->val<<"  , end: "<<tail->val<<"\n";
        int half = count/2;
        int secondHalf = count-half;
        if(head==tail || count<=1){
           // cout<<"val: "<<head->val<<" , tail: "<<tail->val<<"\n";
            return head ? new TreeNode(head->val) : nullptr;

        }
                
        ListNode *tmp = head,*prev = head;
        
        for(int cnt = 0 ;cnt < half ;cnt++){
            prev =tmp;
            tmp=tmp->next;
        }
        
          TreeNode *root =0;
        if(tmp)
           root = new TreeNode(tmp->val);
        
        if(root){
        root->left = buildTree(head,prev,half);
            //cout<<tmp->val<<" , "<<tmp->next->val<<" , "<<tail->val<<"\n";
            if(tmp!=tail)
        root->right = buildTree(tmp->next,tail,secondHalf-1);
        }
//        if(count==1||tail==head){
//            return new TreeNode(head->val);
//        }
        
        
        return root;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {

        if(!head)return 0;

        int count = 0;
        ListNode *tmp = head , *tail = 0;
        while(tmp){
            count++;
            tail = tmp;
            tmp = tmp->next;

        }
        TreeNode* root= buildTree(head, tail, count);

        return root;
    }
};

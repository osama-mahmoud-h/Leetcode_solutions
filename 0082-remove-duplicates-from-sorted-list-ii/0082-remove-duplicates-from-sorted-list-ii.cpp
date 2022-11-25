/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * cur = head;
        ListNode* ans = new ListNode(-200);
        ListNode* ans_tmp = ans;
        
        while(cur!=nullptr){
            if(cur->next!=nullptr && cur->next->val == cur->val){

                int curVal=cur->val;
                while(cur!=nullptr&&cur->val==curVal){
                     ListNode * tmp = cur; 
                     cur= cur->next;
                     delete(tmp);
                }
            }else{
               ListNode* newNode = new ListNode(cur->val);
               ans_tmp->next=newNode;
                ans_tmp = ans_tmp->next;
                ListNode * tmp = cur; 
                cur = cur->next;
                delete(tmp);
            }
        }
        
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
    int INF = 1e6;
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)return 0;
        
        ListNode *tutr = head->next;
        ListNode *cur = head;
        while(cur){
            if(cur->next){
              if(cur->next->val== -INF){
                  return cur->next;
              }  
            }else return 0;
            cur->val= -INF;
            cur=cur->next;
        }
         
        return 0;
        
    }
};
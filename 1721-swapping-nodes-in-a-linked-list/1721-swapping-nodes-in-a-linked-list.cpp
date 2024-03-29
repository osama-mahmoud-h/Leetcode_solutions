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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* first = head, *slow=head,*fast=0;
        
        while(first && k>1){
            first = first->next;
            k--;
        }
        
        fast=first;
        
        while(fast->next ){
            fast = fast->next;
            slow = slow->next;
        }
        
        
        //swap
        int tmp = first->val;
        
        first->val = slow->val;
        
        slow->val = tmp;
        
        return head;
    }
};
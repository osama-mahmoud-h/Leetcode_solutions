class Solution {
private:
    ListNode *reveseList(ListNode* prev,ListNode* head){
        if(!head)return prev;
        ListNode* cur=  head->next;
        head->next =prev;
        return reveseList(head,cur);
    }
public:
    int pairSum(ListNode* head) {
        ListNode *cur = head, *slow = head,*fast = head;

        while(slow){
             fast = fast->next->next;
            if(!fast){
                break;
            }
            slow = slow->next;
        }

        //cut fist half of list and revrse second half
        ListNode * reversed = reveseList(nullptr,slow->next);
        slow->next = nullptr;

        int mx = 0;
        
        while (cur){
            if(cur&&reversed)
            if(cur->val+ reversed->val > mx){
                mx = cur->val+ reversed->val;
            }
            cur = cur->next;
            if(reversed)
            reversed = reversed->next;
        }

        return mx;
    }
};
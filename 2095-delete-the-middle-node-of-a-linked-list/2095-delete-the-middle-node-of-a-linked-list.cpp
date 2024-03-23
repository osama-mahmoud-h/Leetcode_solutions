class Solution {
private:
    ListNode* getPreMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while(fast and fast->next ){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        return prev;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        //if(!head->next)
        ListNode* preMiddle = getPreMiddle(head);

        if(!preMiddle)
            return 0;
        if(!preMiddle->next)
            return head;
        preMiddle->next = preMiddle->next->next;
        return head;
    }
};
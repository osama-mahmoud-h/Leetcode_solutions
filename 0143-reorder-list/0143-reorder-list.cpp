class Solution {
private:
    ListNode* reverse (ListNode* head){
        ListNode* curr = head, *prev = nullptr, *next = head;
        while (next){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode * getMid(ListNode* head){
        ListNode* slow = head, *fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
     
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head, *fast = head;
        
        ListNode* mid = getMid(head);
        ListNode* rev = reverse(mid);
        ListNode* curr = head;
        while (rev->next){
            ListNode* temp = curr->next;
            curr->next = rev;
            curr = temp;
            temp = rev->next;
            rev->next = curr;
            rev = temp;
        }
    }
};
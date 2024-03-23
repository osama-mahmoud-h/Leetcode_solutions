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
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid = slow;
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
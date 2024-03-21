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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = head, *next = head, *prev = nullptr;
        while(next){
            cur = next;
            next = next->next;
            cur->next = prev;
            prev = cur;
        }
        head = cur;
        return head;
    }
};
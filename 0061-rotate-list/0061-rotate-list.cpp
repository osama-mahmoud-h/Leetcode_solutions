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
    int count_nodes(ListNode* head){
        int ans = 0;
        ListNode *cur = head;
        while(cur){
            cur = cur->next;
            ans++;
        }
        return ans;
    }
    ListNode* find_last_nth(ListNode* head, int k, int n){
        ListNode *cur = head, *prev = 0;
         n = n - k;
        while(cur && n-- > 0){
            prev = cur;
            cur = cur->next;
        }
        return prev;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        int n = count_nodes(head);
        k = k % n;
        if(k==0)
            return head;
        ListNode* cur = find_last_nth(head, k, n);
        ListNode* temp = cur->next;
        cur->next = nullptr;
        ListNode* new_head = temp;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        head = new_head;
        return head;
    }
};
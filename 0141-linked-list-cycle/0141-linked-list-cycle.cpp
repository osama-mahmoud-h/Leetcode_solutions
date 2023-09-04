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
    int INF = 1e9;
public:
    bool hasCycle(ListNode *head) {
        ListNode* cur = head;
        
        while(cur){
            if(cur->val== -INF){
                return 1;
            }
            cur->val = -INF;
            cur = cur->next;
        }
        return 0;
    }
};
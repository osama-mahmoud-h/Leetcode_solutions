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
    ListNode* middleNode(ListNode* head) {
        int cnt=0,i;
        ListNode *cur=head;
        while(cur){
            cur=cur->next;
            cnt++;
        }
        
        cur=head;
        i=cnt/2;
        cnt=0;
        while(cur){
            if(i==cnt){
                return cur;
            }
            cnt++;
            cur=cur->next;
        }
        
        return 0;
    }
};
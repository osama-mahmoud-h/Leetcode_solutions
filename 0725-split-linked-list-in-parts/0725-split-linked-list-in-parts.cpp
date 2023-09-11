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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int cnt = 1;
        ListNode*cur = head;
        while(cur){
            cnt++;
            cur = cur->next;
        }
        cur = head; 
        vector<ListNode*> ans;
        
        int i=0;        
        while(i++<k){
         int size = cnt/k;
            if(i<cnt%k){size++;}
            int j=0;
            ListNode *tempHead = cur,*prev = NULL;
            while(j++<size&&cur){
                prev = cur;
                cur = cur->next;
            }
            ans.push_back(tempHead);
            if(prev)
            prev->next = NULL;
        }
        
        return ans;
    }
};
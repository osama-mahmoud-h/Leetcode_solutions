class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>toDelete(nums.begin(), nums.end());
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr) {
            if (toDelete.count(curr->val)) {
                // Node value should be deleted
                ListNode* tmp = curr;
                prev->next = curr->next;
                curr = curr->next;
                tmp->next = nullptr;  
                //delete tmp;
            } else {
                // Keep this node
                prev = curr;
                curr = curr->next;
            }
        }

         head = dummy.next;
         return head;
    }
};

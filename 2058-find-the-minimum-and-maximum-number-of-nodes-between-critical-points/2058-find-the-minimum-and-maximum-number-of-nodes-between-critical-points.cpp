
class Solution {
private:
    bool is_local_max(ListNode* node){
        return node and
               node->next and
               node->next->next and
               node->next->val > node->val and
               node->next->val > node->next->next->val;
    }

    bool is_local_min(ListNode* node){
        return node and
               node->next and
               node->next->next and
               node->next->val < node->val and
               node->next->val < node->next->next->val;
    }
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mx = -INT_MAX, mn = INT_MAX;
        int cnt_critical = 0;
        int first_idx = -1, prev_idx = -1, i = 0;
        for(ListNode* cur = head; cur->next->next; cur=cur->next, ++i){
            if(is_local_max(cur) || is_local_min(cur)){
                ++cnt_critical;
                if(cnt_critical>1){
                    mn = min(mn, i-prev_idx);
                    mx = max(mx, i-first_idx);
                }
                first_idx = first_idx == -1 ? i : first_idx;
                prev_idx = i;
            }
        }
        
        if(cnt_critical < 2){
            mn = mx = -1;
        }
        return  vector<int>{mn, mx};
    }
};
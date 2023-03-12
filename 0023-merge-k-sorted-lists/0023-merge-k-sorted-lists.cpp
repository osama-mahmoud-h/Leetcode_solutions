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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *cur1 = list1, *cur2 = list2 , *prev=0;
        if(!cur1)return cur2;
        
        while(cur1 && cur2){
            while((cur1&&cur2) && (cur1->val < cur2->val)){ 
               // cout<<cur1->val<<"\n";
                prev = cur1;
                cur1 = cur1->next;
            }
            
            ListNode *tmp = cur2;
            cur2 = cur2->next;
            tmp->next = cur1;
            if(!prev){
                list1 = tmp;
                prev = tmp;
            }else{
              //  cout<<prev->val<<"  , ";
                prev->next = tmp;
                prev=prev->next;
            }
        }
        
        if(cur2){
            if(cur1)
            cur1->next = cur2;
            else if(prev){
                prev->next=cur2;
            }
        }
        return list1;
    }
 ListNode* merge(vector<ListNode*>& lists,int low,int high) {
    int mid=(low+high)/2;
    if(low==high){
        return lists[low];
    }
     ListNode* left = merge(lists,low,mid);
     ListNode* right = merge(lists,mid+1,high);

    return mergeTwoLists(left,right);   
 }    
public:
 ListNode* mergeKLists(vector<ListNode*>& lists) {
     int n = lists.size();
     if(!n)return 0;

    return merge(lists,0,lists.size()-1);        
}

};
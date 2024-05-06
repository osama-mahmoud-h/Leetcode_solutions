class Solution {
private:
    void removeNode(ListNode* node, ListNode* prevNode, ListNode* head){
        if(node == head){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode* temp = node;
        prevNode->next = node->next;
        delete temp;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return head = prev;
    }
    void print(ListNode* head){
        ListNode* temp = head;
        while(temp){
            cout<<temp->val<<" , ";
            temp = temp->next;
        }
        cout<<"\n";
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head;
        ListNode* prev = nullptr;
        int mx = 0;
        while(temp){
            if(temp->val >= mx){
                mx = temp->val;
                prev = temp;
                temp = temp->next;
            }else{
                removeNode(temp,prev,head);
                temp = prev->next;
            }
        }
       // print(head);
        return reverse(head);
    }
};
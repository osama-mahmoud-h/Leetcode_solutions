/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
         ListNode tmp=head,pre=head;
          int i=0;
        while(i<=n&&tmp!=null){tmp=tmp.next;i++;}
       //  System.out.print(tmp.val);
        if(tmp==null&&i==n)return head.next;
        
        while(tmp!=null){
            tmp=tmp.next;
            pre=pre.next;
        }
         pre.next=pre.next.next;
         return head;
    }
}
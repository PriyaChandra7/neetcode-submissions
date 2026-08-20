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
        int len=0;
        ListNode temp=head;
        while(temp!=null){
            len++;
            temp=temp.next;
        }
        int l=len-n;
        if(l==0){
            return head.next;
        }
        ListNode temp1=null;
        ListNode temp2=head;

        for(int i=0;i<l;i++){
            temp1=temp2;
            temp2=temp2.next;
        }

        temp1.next=temp2.next;

        return head;
    }
}

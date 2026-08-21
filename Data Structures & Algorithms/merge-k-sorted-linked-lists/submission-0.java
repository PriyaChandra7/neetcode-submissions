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
    public ListNode mergeKLists(ListNode[] lists) {
        ListNode dummy=new ListNode(-1);
        ListNode curr=dummy;

        PriorityQueue<ListNode> pq= new PriorityQueue<>(
            (a,b)-> a.val - b.val
        );
        int l=lists.length;
        int j=0;
        
        if(l==0){
            return null;
        }
        for(int i=0;i<l;i++){
            if(lists[i]!=null)
                pq.offer(lists[i]);
        }

        while(!pq.isEmpty()){
            ListNode small=pq.poll();
            curr.next= small;;
            curr=curr.next;

            if(small.next!=null){
                pq.offer(small.next);
            }

        }
        return dummy.next;
    }
}

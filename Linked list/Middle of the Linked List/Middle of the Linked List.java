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
    public ListNode middleNode(ListNode head) {
        if(head.next == null) return head;
        ListNode p1 = head;
        ListNode p2 = head.next;
        while(p2 != null ){
            p1 = p1.next;
            p2 = p2.next;
            if(p2 != null)
              p2 = p2.next;
            else 
              p2 = null;
        } 
        return p1;
    }
}

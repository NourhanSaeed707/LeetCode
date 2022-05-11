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
    public ListNode swapPairs(ListNode head) {
        if(head == null || head.next == null)
            return head;
        ListNode ptr1 = head;
        ListNode ptr2 = head.next;
        while(ptr1 != null && ptr2 != null){
           int temp = ptr1.val;
           ptr1.val = ptr2.val;
           ptr2.val = temp;
           if(ptr1.next.next==null || ptr2.next.next==null)
            break;
            ptr1 = ptr1.next.next;
            ptr2 = ptr2.next.next;
        }
        return head;
    }
}

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
    public ListNode deleteDuplicates(ListNode head) {
         if(head == null || head.next == null) return head;
        ListNode ptr = head;
        ListNode ptr2 = head.next;
        while(ptr != null && ptr2 != null){
            if(ptr.val == ptr2.val){
                ListNode temp = ptr2;
                ptr.next = ptr2.next;
                ptr2 = ptr.next;
                temp = null;
            }
            else{
                ptr = ptr2;
                ptr2 = ptr2.next;
            }
        }
        return head;
    }
}

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
    public ListNode reverseList(ListNode head) {
        if(head == null) return head;
        ListNode rev = new ListNode(0);
        ListNode ptr = head;
        ListNode point = rev;
        Stack <Integer> st = new Stack<>();
        while(ptr != null){
            st.push(ptr.val);
            ptr = ptr.next;
        }
        while(!st.isEmpty()){
            int f = st.peek();
            rev.next = new ListNode(f);
            rev = rev.next;
            st.pop();
        }
        return point.next;
    }
}

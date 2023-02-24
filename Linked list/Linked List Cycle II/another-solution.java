/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        Set<ListNode> sets = new HashSet<ListNode> ();
        ListNode ptr = head;
        while(ptr != null){
            if(sets.size() == 0)
                sets.add(ptr);
            else if(ptr.next != null && sets.contains(ptr.next) == true)
                return ptr.next;
            else
                sets.add(ptr);
            if(ptr != null)
            ptr = ptr.next;
        }
        return ptr;
    }
}

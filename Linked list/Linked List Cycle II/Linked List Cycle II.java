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
        ListNode p = head;
        Set<ListNode> sets = new HashSet<ListNode> ();
        while(true){
            if(sets.size() == 0)
                sets.add(p);
            else if(sets.contains(p) == true)
                return p;
            else
                sets.add(p);
            if(p == null) return p;
            p = p.next;
        }
    }
}

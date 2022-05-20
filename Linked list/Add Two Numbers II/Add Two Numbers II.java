
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
    ListNode reverse(ListNode node){
        ListNode prev = null;
        ListNode curr = node;
        ListNode next = null;
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        node = prev;
        return node;
    }
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode first = reverse(l1);
        ListNode sec = reverse(l2);
        ListNode res = new ListNode(0);
        ListNode temp = res;
        int carry = 0;
        while(first != null && sec != null){
           int sum = first.val + sec.val + carry;
           first = first.next;
           sec = sec.next;
           carry = sum / 10;
           temp.next = new ListNode(sum % 10);
           temp = temp.next;
        }
        while(first != null){
            int sum = first.val + carry;
            carry = sum / 10;
            temp.next = new ListNode(sum % 10);
            temp = temp.next;
            first = first.next;
        }
        while(sec != null){
            int sum = sec.val + carry;
            carry = sum / 10;
            temp.next = new ListNode(sum % 10);
            temp = temp.next;
            sec = sec.next;
        }
        if(carry > 0){
            temp.next = new ListNode(carry);
            temp = temp.next;
        }
        res = reverse(res.next);
        return res;
    }
}

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
    public void reorderList(ListNode head) {
        LinkedList<ListNode> mylist = new LinkedList<ListNode>(); 
        ListNode temp = head;
        while( temp != null ){
         mylist.add(temp);
         temp = temp.next;
        }
        if( mylist.size() > 1){
          ListNode finl = head;
          ListNode res = finl;
          ListNode front = mylist.getFirst();
          ListNode back = mylist.getLast();
          finl = front;
          finl.next = back;
          finl = finl.next;
          mylist.removeFirst();
          mylist.removeLast();
             while( mylist.size() > 0 && finl != null ){
              front = mylist.getFirst();
              back = mylist.getLast();
              finl.next = front;
              finl = finl.next;
              finl.next = back;          
              finl = finl.next;
              if(mylist.size()>0)
               mylist.removeFirst();
              if(mylist.size()>0)
               mylist.removeLast();
           }
            finl.next = null;
            head = res;
        }
    }
}

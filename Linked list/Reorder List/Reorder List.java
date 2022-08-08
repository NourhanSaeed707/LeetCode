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
        ArrayList<ListNode> mylist = new ArrayList<ListNode>(); 
        ListNode temp = head;
        while( temp != null ){
         mylist.add(temp);
         temp = temp.next;
        }
        if( mylist.size() > 1){
          ListNode finl = head;
          ListNode res = finl;
          ListNode front = mylist.get(0);
          ListNode back = mylist.get( mylist.size() -1 );
          finl = front;
          finl.next = back;
          finl = finl.next;
          mylist.remove(0);
          mylist.remove( mylist.size() - 1 );
             while( mylist.size() > 0 && finl != null ){
              front = mylist.get(0);
              back = mylist.get( mylist.size() - 1 );
              finl.next = front;
              finl = finl.next;
              finl.next = back;          
              finl = finl.next;
              if(mylist.size()>0)
               mylist.remove(0);
              if(mylist.size()>0)
               mylist.remove( mylist.size() - 1 );
           }
            finl.next = null;
            head = res;
        }
    }
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       deque <ListNode*> reverse;
       ListNode* ptr = head;
       ListNode* temp =  new ListNode(0);
       ListNode* finl = temp;
        int i =0;
       while( ptr != NULL ){
          while( i < k && ptr != NULL){
               reverse.push_back(ptr);
               ptr = ptr->next;
               i++;
           }
           i  = 0;
           if(reverse.size() == k ){ 
               while( i < k && reverse.size() > 0){
                  temp->next = new ListNode( reverse.back()->val);
                  temp = temp->next;
                  reverse.pop_back();
               }
           }
           else{
                while( i < k && reverse.size() > 0){
                   temp->next = new ListNode(reverse.front()->val );
                   temp = temp->next;
                   reverse.pop_front();
                }
           }
           i=0;
       }
        return finl->next;
    }
};

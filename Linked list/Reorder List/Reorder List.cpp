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
    void reorderList(ListNode* head) {
      list<ListNode*> mylist;
      ListNode* temp = head;
      while( temp != NULL ){
         mylist.push_back(temp);
         temp = temp->next;
      }
     if(mylist.size()>1){
      ListNode* finl = head;
      ListNode* res = finl;
      ListNode* front = mylist.front();
      ListNode* back = mylist.back();
      finl = front;
      finl->next = back;
      finl = finl->next;
      mylist.pop_front();
      mylist.pop_back();
      while( mylist.size() > 0 && finl != NULL){
          front = mylist.front();
          back = mylist.back();
          finl->next = front;
          finl = finl->next;
          finl->next = back;          
          finl = finl->next;
          if(mylist.size()>0)
           mylist.pop_front();
          
          if(mylist.size()>0)
           mylist.pop_back();
       }
        finl->next = NULL;
        head = res;
     }
    }
};

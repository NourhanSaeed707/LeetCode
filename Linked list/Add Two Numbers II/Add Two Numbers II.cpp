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
    ListNode* reverse(ListNode* node){
        ListNode* prev = NULL;
        ListNode* curr = node;
        ListNode* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        node = prev;
        return node;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack <int> s1;
       stack <int> s2;
        stack <int> s3;
        int carry = 0 ;
       while(l1){
           s1.push(l1->val);
           l1 = l1->next;
       }
      while(l2){
           s2.push(l2->val);
           l2 = l2->next;
       }
      while(!s1.empty() && !s2.empty()){
            int sum = s1.top() + s2.top() + carry;
            s2.pop();
            s1.pop();
            carry = sum / 10;
            s3.push(sum % 10);
        }
      while(!s1.empty()){
          int sum = s1.top() + carry;
          s1.pop();
          carry = sum / 10;
          s3.push(sum % 10);
      }
          while(!s2.empty()){
          int sum =  s2.top() + carry;
          s2.pop();
          carry = sum / 10;
          s3.push(sum % 10);
      }
        if(carry){
            s3.push(carry);
        }
        ListNode* newHead = new ListNode(0);
        ListNode* curr = newHead;
        while(!s3.empty()){
            curr->next = new ListNode(s3.top());
            curr = curr->next;
            s3.pop();
        }
        return newHead->next;
    }
};

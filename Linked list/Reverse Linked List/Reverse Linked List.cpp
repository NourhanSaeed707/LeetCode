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
    ListNode* reverseList(ListNode* head) {
        stack<int> reverse;
        if(head == NULL) return head;
        ListNode* ptr = head;
        ListNode* rev = new ListNode(0);
        ListNode* point = rev;
        while(ptr != NULL){
           reverse.push(ptr->val);
           ptr = ptr->next;
        }
        while(!reverse.empty()){
            int f = reverse.top();
            rev->next = new ListNode(f); 
            rev = rev->next;
            reverse.pop();
        }
     return point->next;
    }
};

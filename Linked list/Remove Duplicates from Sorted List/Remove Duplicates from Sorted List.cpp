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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* ptr = head;
        ListNode* ptr2 = head->next;
        while(ptr && ptr2){
            if(ptr->val == ptr2->val){
                ListNode* temp = ptr2;
                ptr->next = ptr2->next;
                ptr2 = ptr->next;
                delete(temp);
            }
            else{
                ptr = ptr2;
                ptr2 = ptr2->next;
            }
        }
        return head;
    }
};

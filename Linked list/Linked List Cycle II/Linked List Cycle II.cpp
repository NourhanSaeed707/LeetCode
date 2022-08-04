/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * tail = new ListNode(-1);
        ListNode * p = head;
        unordered_set<ListNode*> sets;
        while(true){
            if(sets.size() == 0)
                sets.insert(p);
            else if(sets.find(p) != sets.end())
                return p;
            else
                sets.insert(p);
            if(p == NULL) return p;
            p = p->next;
        }
    }
};

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode ansHead(0);
        ListNode* ans = &ansHead;

        while (l1 && l2)
        {
            l1->val < l2->val ? (ans->next = l1, l1 = l1->next) : (ans->next = l2, l2 = l2->next);
            ans = ans->next;
        }

        if (l1) ans->next = l1;
        if (l2) ans->next = l2;

        return ansHead.next;
    }
};
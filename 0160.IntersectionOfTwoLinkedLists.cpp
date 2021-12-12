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
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB) return NULL;
        int LA = GetLength(headA);
        int LB = GetLength(headB);
        if(LA>=LB)
        {
         for(int i=0;i<LA-LB;i++)
             headA = headA->next;
        }
        else
        {
            for(int i=0;i<LB-LA;i++)
                headB = headB->next;
        }
        while(headA&&headB&&headA!=headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return (headA&&headB)?headA:NULL;
        
    }
    
    int GetLength(ListNode *head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }  
};
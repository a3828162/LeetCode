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
    bool isPalindrome(ListNode* head) {
        int length = getListLength(head);
        int palindromeLength = length / 2;
        vector<int> palindrome;
        
        while (palindromeLength != 0)
        {
            palindrome.push_back(head->val);
            palindromeLength--;
            head = head->next;
        }
        
        if (length % 2 == 1)
        {
            head = head->next;
        }
        
        for (int i = palindrome.size() - 1; i >= 0; i--)
        {
            if (palindrome[i] != head->val)
                return false;
            
            head = head->next;
        }
        
        return true;
    }
    
    int getListLength(ListNode* head)
    {
        int length = 0;
        
        while (head != NULL)
        {
            length++;
            head = head->next;
        }
        
        return length;
    }
};
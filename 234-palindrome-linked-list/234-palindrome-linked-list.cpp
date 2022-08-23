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
        
        return check(head,head);
    }
    
    bool check(ListNode* &head,ListNode* p)
    {
        if(!p)return true;
        
        bool Palindrome = check(head,p->next);
        
        if(head->val != p->val)
        {
            return false;
        }
        
        head = head->next;
        
        return Palindrome;
    }
};

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//        ListNode* head2 = reverse(head);
//         if(head==head2)return true;
//         else
//         return false;
//     }
//     ListNode* reverse(ListNode* head)
//     {
//         ListNode* prev=NULL;
//         ListNode* next = NULL;
//         while(head)
//         {
//             next= head->next;
//             head->next = prev;
//             prev = head;
//             head = next;
//         }
//         return head;
//     }
// };
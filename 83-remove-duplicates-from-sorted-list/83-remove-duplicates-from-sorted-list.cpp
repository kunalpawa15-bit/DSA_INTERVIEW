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
        ListNode* prev= head;
      
        
        while(prev && prev->next)
        {
            ListNode* curr = prev->next;
            if(prev->val == curr->val)
            {
                prev->next = curr->next;
            }
            else prev = curr;
        }
        return head;
    }
};
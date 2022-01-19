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
        if((!head) || (!head->next)) return NULL;
        
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        
        while(slow){
            if(slow == fast) break;
            if((!fast) || (!fast->next)) return NULL;
            
            fast =fast ->next->next;
            slow= slow->next;
        }
        
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
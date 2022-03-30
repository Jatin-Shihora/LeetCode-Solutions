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
        if (!head) return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* last = head;
        
        while (last && last->next) {
            // move pointers if no duplicate
            if (pre->next->val != last->next->val) {
                pre = pre->next;
                last = last->next;
            }
            // scan duplicates if any
            while (last->next && pre->next->val == last->next->val) {
                last = last->next;
            }
            // remove duplicates if any
            if (pre->next != last) {
                pre->next = last->next;
                last = pre->next;
            }
        }
        return dummy->next;
    }
};
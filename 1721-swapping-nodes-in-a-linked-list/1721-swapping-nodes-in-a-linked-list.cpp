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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;
        
        int counter = 1;
        while(curr!=NULL){
            if (counter<k){
                left = left->next;
            }
            if (counter>k){
                right = right->next;
            }
            curr = curr->next;
            counter++;
        }
        //swap values
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        
        return head;
    }
};
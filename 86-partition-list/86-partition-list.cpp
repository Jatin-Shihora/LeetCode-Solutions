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
 ListNode* partition(ListNode* head, int x) {
     ListNode *lesser = new ListNode(-1), *greater = new ListNode(-1), *lesser_head = lesser, *greater_head = greater;
     while(head){
         if(head -> val < x) 
                lesser -> next = head, lesser = lesser -> next;
         else 
                greater -> next = head, greater = greater -> next;
         head = head -> next; 
     }
     greater -> next = NULL;
     lesser -> next = greater_head -> next;
     return lesser_head -> next;
 }
};
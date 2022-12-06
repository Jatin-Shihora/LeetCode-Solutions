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

/*
ALGO:
1.Two pointer approach one for odd and next for even.The even pointer is 1step ahead from odd pointer .
2.Now create one more pointer to track the start of even indices i.e evenstart .
3.After that link even with its next even and odd with its next odd.
4.And now in the end put evenstart at the end of odd list

TC and SC :O(n) and O(1)
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==0) return NULL;
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenstart = even;
        
        //giving condition as while(0dd->next && even->next) instead of while(odd && even) because in case of even numberof nodes, even would be pointing at last node and its next would be 0 so even->next->next would give us an error
        //link even with its next even and odd with its next odd
        while(odd->next && even->next){
            odd->next = odd->next->next;
            even->next=even->next->next;
            
            odd=odd->next ;
            even=even->next;
        }
        //now put evenstart at the end of odd list
        odd->next = evenstart;
        return head;
    }
};
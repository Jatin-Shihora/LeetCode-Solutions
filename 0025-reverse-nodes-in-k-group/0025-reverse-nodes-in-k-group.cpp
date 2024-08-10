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
    ListNode* reverseLinkedList(ListNode* head, int k) {
        ListNode* new_head = nullptr;
        ListNode* ptr = head;
        while (k > 0) {
            ListNode* next_node = ptr->next;
            ptr->next = new_head;
            new_head = ptr;
            ptr = next_node;
            k--;
        }
        return new_head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* ptr = head;
        while (count < k && ptr != nullptr) {
            ptr = ptr->next;
            count++;
        }
        if (count == k) {
            ListNode* reversedHead = this->reverseLinkedList(head, k);
            head->next = this->reverseKGroup(ptr, k);
            return reversedHead;
        }
        return head;
    }
};
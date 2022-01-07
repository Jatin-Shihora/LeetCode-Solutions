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

    ListNode* HeadNode;
    Solution(ListNode* head) {
       HeadNode = head;
    }
    
    int getRandom() {
        int res, len = 1;
        ListNode* v = HeadNode;
        while(v){
            if(rand() % len == 0){
                res = v->val;
            }
            len++;
            v = v->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
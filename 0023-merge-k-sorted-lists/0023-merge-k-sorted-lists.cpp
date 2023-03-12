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
    /*
=> Initially we are putting k nodes in a heap==> O(klogk)
=> Then we are making final list in which we are doing 1 pop and 1 push into the heap i.e. O(2logk)
=> So, for every node, O(2logk) => O(logk)
=> So, over all for n nodes ==> O(nlogk)
=> Now, after adding these 2:==> O(klogk + nlogk) = O((k+n)logk)
    */
    struct compare{
        bool operator()(const ListNode* l,const ListNode* r){
            return l->val > r->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode *>, compare> q;
        //initially we are putting k nodes in a heap
        for(auto l: lists) if(l) q.push(l);
        
        if(q.empty()) return NULL;
        
        ListNode* result = q.top();
        q.pop();
        if(result->next) q.push(result->next);
        ListNode* tail = result;
        //then we are making final list in which we are doing 1 pop and 1 push into the heap 
        while(!q.empty()){
            tail->next = q.top();
            q.pop();
            tail= tail->next;
            if(tail->next) q.push(tail->next);
        }
        return result;
    }
};
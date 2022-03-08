we need to find the middle node of the given linkedlist . In case of even number of nodes in the linkedlist the 2nd middle node is the favourable output .
​
**Intuition:-**
* Since we need to find the middle node of the linked list , The best intuition we can get is to traverse the whole linkedlist and once we find the length of the linkedlist we can easily **find middle node by dividing the length with 2** `i.e middleNode= Length of LinkedList / 2 `
* There is one more method to solve this question as well .The name of that method is **Tortoise and hare method or slow and fast pointer approach or two pointer approach** .In this method we take two pointer one as slow and other as fast . The Slow pointer moves by one step whereas fast moves by 2 steps. By the time fast reaches the end of the LinkedList, slow pointer will reach to the middle node
​
**Brute Force Algorithm :-**
1. Initialize a pointer `temp` which will traverse the whole linkedlist and find the `length` of the linkedlist .
2. Now initialize a another variable known as `middle` for finding the middle node as MiddleNode will be equal to `Middle Node= Length of LinkedList / 2`
3. Once we get the index of the middle Node then we need to travers our temp pointer back to that middeNode to know the value of middle node
​
**C++ Brute Force Code:-**
```
class Solution {
public:
ListNode* middleNode(ListNode* head) {
ListNode *temp = head;
int length=0;
//Traversing temp till the end of linked list to find length #O(n)
while(temp){
length++;
temp = temp->next;
}
int middle = length/2;
temp=head;
//traversing temp node back to middle node #O(n/2)
while(temp && middle--)
temp=temp->next;
return temp;
}
};
```
**JAVA Brute Force Code:-**
```
class Solution {
public ListNode middleNode(ListNode head) {
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode temp = head;
        int length=0;
		//Traversing temp till the end of linked list to find length #O(n)
        while(temp!=null){
            temp = temp.next;
            length++;
        }
        int middle = length/2;
        temp=head;
        //traversing temp node back to middle node #O(n/2)
        while(middle != 0){                
         temp = temp.next;
         middle--;
        }
        return temp;
    }
}
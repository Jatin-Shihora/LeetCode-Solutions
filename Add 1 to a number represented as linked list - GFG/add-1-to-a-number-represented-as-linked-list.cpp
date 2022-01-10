// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
/*
Simple Approach →  
1) Reverse A List.
2) Add +1 To Reversed List.
3) Reverse A List Again and Return that node.
*/
    public:
    Node* reverse(Node *head){
        Node* current=head;
        Node* prev = NULL, *next = NULL ;
        while(current){
            next= current->next;
            current->next = prev;
            prev =current;
            current=next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        //Your code here
        Node* temp = reverse(head);
        head= temp;
        while(head){
            if(head->data!=9){
                head->data = head->data+1;
                break;
            }
            else if(head->data==9 and head->next!=NULL) head->data = 0;
            else if(head->data==9 and head->next==NULL) head->data= head->data+1;
            head=head->next;
        }
        head = reverse(temp);
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct et
{
	char value;
	et* left, *right;
	
	et(char x){
	    value = x;
	    left = right = NULL;
	}
};

bool isOperator(char c)
{
	if (c == '+' || c == '-' ||
			c == '*' || c == '/' ||
			c == '^')
		return true;
	return false;
}

void inorder(et *t)
{
	if(t)
	{
		inorder(t->left);
		printf("%c ", t->value);
		inorder(t->right);
	}
}

et* constructTree(char []);

int main()
{   
    int t;
    cin>>t;
    while(t--){
    char postfix[25];
	cin>>postfix;
	et* r = constructTree(postfix);
	inorder(r);
	cout<<endl;
}
return 0;
}// } Driver Code Ends


/*struct et
{
	char value;
	et* left, *right;
};*/

/*
Approach:-
We traverse the postfix expression and create nodes 
whenever we encounter non-operators.
We store these nodes in stack data structure.
Whenever we encounter an operator, we pop the top 2 elements of our stack
and assign them as left and right nodes to the current operator. 
Then we push this node structure to our stack.
Hence, iteratively we keep on growing our tree structure 
and at the end there will always be only a single element in the stack ,
pointing the head of our expression tree.
We return the head.
*/

//function to construct expression tree
et* constructTree(char postfix[])
{
    stack<et*> st;
    int n = strlen(postfix);
    for(int i=0;i<n;i++){
        if(isalpha(postfix[i])){
            et *node = (struct et *)malloc(sizeof(struct et));
            node->value = postfix[i];
            node->left = 0;
            node->right = 0;
            st.push(node);
        }
        else{
            et *node1,*node2,*node3;
            node3 = (struct et *)malloc(sizeof(struct et));
            node3->value = postfix[i];
            node2 = st.top();
            node3->right = node2;
            st.pop();
            node1 = st.top();
            node3->left = node1;
            st.pop();
            st.push(node3);
        }
    }
    return st.top();
}

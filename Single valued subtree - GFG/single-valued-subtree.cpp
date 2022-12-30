//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node* root = newNode(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current node
			currNode->left = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}


// } Driver Code Ends
//User function Template for C++

/* Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/
class Solution {
public:
    bool countSingleRec(Node* root, int &count){
	// Return false to indicate NULL
	if (root == NULL) return true;

	// Recursively count in left and right subtrees also
	bool left = countSingleRec(root->left, count);
	bool right = countSingleRec(root->right, count);

	// If any of the subtrees is not singly, then this
	// cannot be singly.
	if (left == false || right == false) return false;

	// If left subtree is singly and non-empty, but data
	// doesn't match
	if (root->left && root->data != root->left->data) return false;

	// Same for right subtree
	if (root->right && root->data != root->right->data) return false;

	// If none of the above conditions is true, then
	// tree rooted under root is single valued, increment
	// count and return true.
	count++;
	
	return true;
    }

// This function mainly calls countSingleRec()
// after initializing count as 0
public:
    int singlevalued(Node* root){
	// Initialize result
	int count = 0;

	// Recursive function to count
	countSingleRec(root, count);

	return count;
    }
};


//{ Driver Code Starts.

int main()
{

	int t;
	cin >> t;
	getchar();
	while (t--)
	{

		string inp;
		getline(cin, inp);

        Solution ob;
        
		struct Node* root = buildTree(inp);
		cout << ob.singlevalued(root) << "\n";

	}
	return 0;
}

// } Driver Code Ends
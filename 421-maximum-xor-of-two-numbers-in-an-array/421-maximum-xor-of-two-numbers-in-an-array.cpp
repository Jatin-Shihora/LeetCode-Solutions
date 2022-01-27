class TrieNode{
public:
    TrieNode *child[2];
    
    TrieNode(){
        this->child[0] = NULL; //for 0 bit 
        this->child[1] = NULL; //for 1 bit
    }
};
class Solution {
    TrieNode *newNode;
    
    void insert(int x){   //to insert each element into the Trie
        TrieNode *t = newNode;
        bitset<32> bs(x);
        
        for(int j=31; j>=0; j--){
            if(!t->child[bs[j]]) t->child[bs[j]] = new TrieNode(); //start from the MSB =, move to LSB using bitset
            t = t->child[bs[j]];
        }    
    }
    
public:
    int findMaximumXOR(vector<int>& nums) {
        newNode = new TrieNode();
        for(auto &n : nums) insert(n); //insert all the elements into the Trie
        
        int ans=0; //Stores the maximum XOR possible so far
        for(auto n : nums){
            ans = max(ans, maxXOR(n));  //updates the ans as we traverse the array & compute max XORs at each element.
        }
        return ans;
    }
    
    int maxXOR(int n){
        TrieNode *t = newNode;
        bitset<32> bs(n);
        int ans=0; 
        for(int j=31; j>=0; j--){
            if(t->child[!bs[j]]) ans += (1<<j), t = t->child[!bs[j]]; //Since 1^0 = 1 & 1^1 = 0, 0^0 = 0
           
            else t = t->child[bs[j]];
        }
        return ans;
    }
};
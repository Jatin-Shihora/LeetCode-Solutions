class WordDictionary {
private:

    class trie{
        public:
        bool isEnd;
        trie *child[26];

        trie(){
            this->isEnd=false;
            for(int i=0;i<26;i++){
                this->child[i]=NULL;
            }
        }
    };

public:

    trie *root;
    WordDictionary() {
        root=new trie();
    }
    
    void addWord(string word) {
        trie *temp=root;

        for(int i=0;i<word.length();i++){
            int val=word[i]-'a';
            if(!temp->child[val]){
                trie *newNode=new trie();
                temp->child[val]=newNode;
            }
            temp=temp->child[val];
            
        }
        temp->isEnd=true;
    }

    bool find(trie *root, string word, int idx){
        if(idx==word.length()){
            return root->isEnd;
        }

        if(word[idx]=='.'){
            for(int i=0;i<26;i++){
                if(root->child[i]){
                    if(find(root->child[i],word,idx+1)){
                        return true;
                    }
                }
            }
            return false;
        }
        else{
            int val=word[idx]-'a';
            if(root->child[val]){
                return find(root->child[val],word,idx+1);
            }
            return false;
        }
    }
    
    bool search(string word) {
        return find(root,word,0);
    }
};


/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
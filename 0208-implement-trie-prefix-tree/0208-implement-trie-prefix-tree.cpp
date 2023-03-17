class Trie {
    private:
    //map of character and next trie Node
    map<char, Trie*> next = {};
    //isWord==1-->end of the word; Completely traversed.
    bool isword = false;
public:
    Trie() {}

    void insert(string word) {
        //this will give current Trie Tree constructed till now.
        Trie* node = this;
        //Inserting char by char
        for (char ch : word) {
            //if current ch is not present in the trie, create one
            if (!(node->next).count(ch)) { node->next[ch] = new Trie(); }
            //move to the next node.
            node = node->next[ch];
        }
        //word is inserted so making end node as 1
        node->isword = true;
    }

    bool search(string word) {
        Trie* node = this;
        for (char ch : word) {
            //if current ch is not present in the trie, return 0; Not need to go forward
            if (!node->next.count(ch)) { return 0; }
            //keep on searching, Move to next Node
            node = node->next[ch];
        }
        //if final node we got is the end node it will 1 else 0. [ partially found ]
        return node->isword;
    }

    bool startsWith(string prefix) {
        Trie* node = this;
        for (char ch : prefix) {
            if (!node->next.count(ch)) { return false; }
            node = node->next[ch];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
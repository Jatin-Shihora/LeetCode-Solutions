
struct Bucket {
    
    vector<int> bucket = {};
    void add(int val){
        if(!contains(val)) bucket.push_back(val);
    }
    bool contains(int val){
        return find(begin(bucket),end(bucket),val) != end(bucket);
    }
    void remove(int val){
        auto pos = find(begin(bucket),end(bucket),val);
        if(pos != end(bucket)) bucket.erase(pos);
    }
};
class MyHashSet {
public:
    vector<Bucket> buckets;
    int hashSize;
    MyHashSet(int keySpace = 137) {
        hashSize = keySpace;
        buckets.resize(keySpace);
    }
    
    void add(int key) {
        buckets[key % hashSize].add(key);
    }
    
    void remove(int key) {
        buckets[key % hashSize].remove(key);
    }
    
    bool contains(int key) {
        return buckets[key%hashSize].contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
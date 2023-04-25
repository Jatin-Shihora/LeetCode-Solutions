class SmallestInfiniteSet {
public:
    int cur = 1;
    set<int> added; 
    int popSmallest() {
        if (!added.empty()) {
            int res = *begin(added);
            added.erase(begin(added));
            return res;
        }
        return cur++;
    }
    void addBack(int num) {
        if (num < cur)
            added.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
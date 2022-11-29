class RandomizedSet {
private: 
    vector<int> a;//Main container
    unordered_map<int,int> val2indx; //searching, insertion & deletion of element in average O(1) time
public:
    RandomizedSet() {
    // No need to initialise a & val2indx as they are initialised automatically
	// to 0 as and when their container size increases.
    }
    
    bool insert(int val) {
        // If val is not already present in the map, find() function  
	    // returns an iterator(m.end()) pointing to next memory location  
        // of the last element of the map. Otherwise, find() returns an iterator 
        // pointing to val which was already present in the map.
        if(val2indx.find(val)!=val2indx.end()) return false;
        else {
            a.push_back(val);// insert val at the end of the array
            val2indx[val]=a.size()-1;// val2index[key,value] stores the array element and 
			                   // its index as key=array element & value=array element index
            return true;
        }
    }
    
    bool remove(int val) {
        if(val2indx.find(val)==val2indx.end()) return false;//val not present in the array vector
        else {
            /*
             For example: a=[8,4,3,2], m={[8,0],[4,1],[3,2],[2,3]}, val=4, last=2
	         After a[m[val]]=a.back(); a=[8,2,3,2], m={[8,0],[4,1],[3,2],[2,3]}
	         After a.pop_back(); a=[8,2,3], m={[8,0],[4,1],[3,2],[2,3]}
	         After m[last]=m[val]; a=[8,2,3], m={[8,0],[4,1],[3,2],[2,1]}
	         After m.erase(val); a=[8,2,3], m={[8,0],[3,2],[2,1]}
            */

            int last = a.back();// back() fetches last element of the array vector
            a[val2indx[val]] = a.back();// m[val] locates the index of val in the array vector.
				                        // Then we copy array last element value to the val location in the array
            a.pop_back();// Delete the last element of the array 
            val2indx[last]=val2indx[val];// In hashmap, assign index of val in array to the index of the last element   
            val2indx.erase(val);// Delete the val entry from map
            return true;
        }
    }
    
    int getRandom() {
        // rand() function gives random value in the range of 0 to RAND_MAX(whose value is 32767). x%y gives 
 	    // remainder when x is divided by y and this remainder is in the range of 0 to y-1.
	    // rand()%a.size() gives random value in the range of (0 to a.size()-1).
	    // a[rand()%a.size()] will give random value of array in the range of a[0] to a[a.size()-1].
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        // the queue holding the elements for the circular queue
        q.resize(k);
        // the number of elements in the circular queue
        cnt = 0;
        // queue size
        sz = k;
        // the idx of the head element
        headIdx = 0;
    }
    
    bool enQueue(int value) {
        // handle full case
        if (isFull()) return false;
        // Given an array of size of 4, we can find the position to be inserted using the formula
        // targetIdx = (headIdx + cnt) % sz
        // e.g. [1, 2, 3, _]
        // headIdx = 0, cnt = 3, sz = 4, targetIdx = (0 + 3) % 4 = 3
        // e.g. [_, 2, 3, 4]
        // headIdx = 1, cnt = 3, sz = 4, targetIdx = (1 + 3) % 4 = 0
        q[(headIdx + cnt) % sz] = value;
        // increase the number of elements by 1
        cnt += 1;
        return true;
    }
    
    bool deQueue() {
        // handle empty case
        if (isEmpty()) return false;
        // update the head index
        headIdx = (headIdx + 1) % sz;
        // decrease the number of elements by 1
        cnt -= 1;
        return true;
    }
    
    int Front() {
        // handle empty queue case
        if (isEmpty()) return -1;
        // return the head element
        return q[headIdx];
    }
    
    int Rear() {
        // handle empty queue case
        if (isEmpty()) return -1;
        // Given an array of size of 4, we can find the tailIdx using the formula
        // tailIdx = (headIdx + cnt - 1) % sz
        // e.g. [0 1 2] 3
        // headIdx = 0, cnt = 3, sz = 4, tailIdx = (0 + 3 - 1) % 4 = 2
        // e.g. 0 [1 2 3]
        // headIdx = 1, cnt = 3, sz = 4, tailIdx = (1 + 3 - 1) % 4 = 3
        // e.g. 0] 1 [2 3
        // headIdx = 2, cnt = 3, sz = 4, tailIdx = (2 + 3 - 1) % 4 = 0
        return q[(headIdx + cnt - 1) % sz];
    }
    
    bool isEmpty() {
        // no element in the queue
        return cnt == 0;
    }
    
    bool isFull() {
        // return true if the count is equal to the queue size
        // else return false
        return cnt == sz;
    }
    
private:
    int cnt, sz, headIdx;
    vector<int> q;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
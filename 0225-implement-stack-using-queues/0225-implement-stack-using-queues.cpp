class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {   
        
    }
    
    // Pushing element onto stack
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());    q1.pop();
        }
        swap(q1, q2);
    }
    
    // Removing element on top of the stack and returning it
    int pop() {
        int result = top();
        q1.pop();
        return result;
    }
    
    //Getting top element
    int top() {
        return q1.front();
    }
    
    // Return whether the stack is empty. 
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
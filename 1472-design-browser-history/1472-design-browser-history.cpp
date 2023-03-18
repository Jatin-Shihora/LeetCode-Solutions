class BrowserHistory {
public:
    //we need two stacks. One to store history and another to store the next URLs in case we go back.
    stack<string> history;
    stack<string> future;

    BrowserHistory(string homepage) {
        history.push(homepage);
        future = stack<string>();           // Reset the forward stack.
    }

    void visit(string url) {
        history.push(url);
        future = stack<string>();           // Reset the forward stack.
    }

    //You must always have at least one element in the history stack which is the page that you are currently at.
    string back(int steps) {
        while(steps > 0 && history.size() > 1) { // Always keep at least one element in the stack. 
            future.push(history.top());
            history.pop();
            steps--;
        }
        return history.top();
    }
    
    //	But for the forward stack, this condition is not necessary.
    string forward(int steps) {
        while(steps > 0 && future.size() > 0) {
            history.push(future.top());
            future.pop();
            steps--;
        }
        return history.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
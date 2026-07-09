class MyQueue {
public:
    queue<int>q;
    MyQueue() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int x=peek();
        q.pop();
        return x;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        if(!q.empty())
            return 0;
        return 1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
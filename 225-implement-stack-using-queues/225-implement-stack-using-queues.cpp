class MyStack {
public:
    deque<int> q1;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push_front(x);
    }
    
    int pop() {
        int ele = q1.front();
        q1.pop_front();
        return ele;
    }
    
    int top() {
        return q1.front();
    }
    
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
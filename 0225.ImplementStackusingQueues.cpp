class MyStack {
public:
    queue<int> q1, q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        
        q1.push(x);
    }
    
    int pop() {
        
        int size = q1.size()-1;
        
        while(q2.size()!=size)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        int tmp = q1.front();
        
        q1 = q2;
        
        while(!q2.empty()) q2.pop();
        
        return tmp;
    }
    
    int top() {
        
        return q1.back();
    }
    
    bool empty() {
        
        return q1.empty() && q2.empty();
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
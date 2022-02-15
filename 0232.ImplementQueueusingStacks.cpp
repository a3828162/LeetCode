class MyQueue {
public:
    stack<int> stk1;
    stack<int> stk2;
    
    MyQueue() {

    }
    
    void push(int x) {
        
        stk1.push(x);
    }
    
    int pop() {
        
        int tmp = 0;
        
        while(!stk1.empty())
        {
            tmp = stk1.top();
            stk1.pop();
            stk2.push(tmp);
        }
        
        int result = stk2.top();
        stk2.pop();
        
        while(!stk2.empty())
        {
            tmp = stk2.top();
            stk2.pop();
            stk1.push(tmp);
        }
        
        return result;
    }
    
    int peek() {
        int tmp = 0;
        
        while(!stk1.empty())
        {
            tmp = stk1.top();
            stk1.pop();
            stk2.push(tmp);
        }
        
        int result = stk2.top();
        
        while(!stk2.empty())
        {
            tmp = stk2.top();
            stk2.pop();
            stk1.push(tmp);
        }
        
        return result;  
    }
    
    bool empty() {
        
        return stk1.empty() && stk2.empty();
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
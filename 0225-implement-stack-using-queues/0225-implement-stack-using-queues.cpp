class MyStack {
    private:
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
      queue<int>newQ;
        newQ.push(x);
        while(q.size()){
            newQ.push(q.front());
            q.pop();
        }
        while(newQ.size()){
            q.push(newQ.front());
            newQ.pop();
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
      //  cout<<"sz: "<<q.size()<<"\n";
        return ! q.size();
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
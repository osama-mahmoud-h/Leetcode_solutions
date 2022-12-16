class MyQueue {
  Stack<Integer> s1;
  Stack<Integer> s2;
  int front=-1;  
int peek=-1;
    /** Initialize your data structure here. */
    public MyQueue() {
      s1=new Stack();  
      s2=new Stack();     
    }
   
    /** Push element x to the back of queue. */
    public void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
       if(!s2.isEmpty())
           front=s2.pop();
        
         while(!s2.isEmpty()){
            s1.push(s2.pop());
        }
        return front;
    }
    
    /** Get the front element. */
    public int peek() {
        while(!s1.isEmpty()){
            s2.push(s1.pop());
        }
       if(!s2.isEmpty())
           peek=s2.peek();
        
         while(!s2.isEmpty()){
            s1.push(s2.pop());
        }
        return peek;
        
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        return s1.size()==0;
            
    }
}
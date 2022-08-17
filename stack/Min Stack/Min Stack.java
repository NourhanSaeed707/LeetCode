class MinStack {
    Stack<Integer> st = new Stack<Integer>();
    Stack<Integer> st2 = new Stack<Integer>();
    public MinStack() {
        
    }
    
    public void push(int val) {
        st.push(val);
        if( st2.empty() )
            st2.push(val);
        else {
            if(st.peek() < st2.peek() )
                st2.push( st.peek() );
            else
                st2.push( st2.peek() );
        }
    }
    
    public void pop() {
        st.pop();
        st2.pop();
    }
    
    public int top() {
       return st.peek();
    }
    
    public int getMin() {
        return st2.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

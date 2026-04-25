class MinStack {
public:
    stack<int>st;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        } 
    }
    
    int top() {
        if(!st.empty()){   
            return st.top();
        }
    }
    
    int getMin() {
        if (st.empty()) return -1;
        stack<int>mis=st;
        int mini=mis.top();
        while(!mis.empty()){
            mini= min(mini, mis.top());
            mis.pop();
        }
        return mini;
    }
};

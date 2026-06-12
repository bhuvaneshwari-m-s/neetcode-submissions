class MinStack {
public:
    stack<int> st;
    stack<int> minSt;

    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        int value = min(val, minSt.empty() ? val : minSt.top());
        minSt.push(value);
    }
    
    void pop() {
        minSt.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

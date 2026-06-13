class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto token : tokens)
        {
            if(token == "+" or token == "-" or token == "*" or token == "/")
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                if(token == "+")
                    st.push(left+right);
                else if(token == "-")
                    st.push(left - right);
                else if(token == "*")
                    st.push(left * right);
                else
                    st.push(left / right);
            }
            else
                st.push(stoi(token));
        }
        return st.top();
    }
};

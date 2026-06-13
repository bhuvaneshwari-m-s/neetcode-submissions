class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> res(n, 0);

        stack<int> st;
        for(int i = 0 ; i < n ; i++)
        {
            while(!st.empty() && temps[st.top()] < temps[i])
            {
                res[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        
        return res;
    }
};

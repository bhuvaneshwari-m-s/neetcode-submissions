class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n < 3)
            return 0;
        int res = 0;
        stack<int> st;
        for(int i = 0 ; i < n ; i++)
        {
            while(!st.empty() && height[st.top()] < height[i])
            {
                int mid = height[st.top()];
                st.pop();
                if(!st.empty())
                {
                    int left = height[st.top()];
                    int right = height[i];
                    int h = min(left, right) - mid;
                    int width = i - (st.top() + 1);
                    res += h * width;
                }
            }
            st.push(i);
        }
        return res;
    }
};

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        int n = heights.size();
        for(int i = 0 ; i < n-1; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                int ht = min(heights[i], heights[j]);
                int curr = ht * (j - i);
                res = max(res, curr);
            }
        }
        return res;
    }
};

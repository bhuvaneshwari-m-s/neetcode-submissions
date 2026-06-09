class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n - 1;
        int res = 0;
        while(l < r)
        {
            int ht = min(heights[l], heights[r]);
            int curr = ht * (r - l);
            res = max(res, curr);
            if(heights[l] > heights[r])
                r--;
            else
                l++;
        }
        return res;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n < 3)
            return 0;
        int res = 0;
        vector<int> leftm(n);
        vector<int> rightm(n);
        leftm[0] = height[0];
        rightm[n-1] = height[n-1];

        for(int i = 1 ; i < n ; i++)
            leftm[i] = max(leftm[i-1], height[i]);
        for(int i = n - 2 ; i >= 0 ; i--)
            rightm[i] = max(rightm[i+1], height[i]);

        for(int i = 1 ; i < n - 1; i++)
        {
            int curr = min(leftm[i], rightm[i]) - height[i];
            if(curr > 0)
                res += curr;
        }
        return res;
    }
};

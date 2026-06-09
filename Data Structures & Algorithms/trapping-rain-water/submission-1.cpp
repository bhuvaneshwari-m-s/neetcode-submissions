class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if(n < 3)
            return 0;

        int water = 0;
        int left = 0;
        int right = n - 1;
        int leftm = height[0];
        int rightm = height[n-1];

        while(left < right)
        {
            if(leftm <= rightm)
            {
                left++;
                leftm = max(leftm, height[left]);
                water += (leftm - height[left]);
            }
            else{
               right--;
               rightm = max(rightm, height[right]);
               water += (rightm - height[right]);
            }
        }

        return water;
    }
};

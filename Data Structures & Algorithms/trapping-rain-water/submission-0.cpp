class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if(n < 3)
            return 0;

        int water = 0;
        int left = 1;
        int right = n - 2;
        int leftm = height[0];
        int rightm = height[n-1];

        while(left <= right)
        {
            if(leftm <= rightm)
            {
                if(leftm <= height[left])
                    leftm = height[left];
                else
                    water += (leftm - height[left]);
                left++;
            }
            else{
                if(rightm <= height[right])
                    rightm = height[right];
                else 
                    water += (rightm - height[right]);
                right--;
            }
        }

        return water;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int res  = 1;
        int i = 0;
        int curr = nums[0];
        int streak = 0;
        while(i < n)
        {
            if(curr != nums[i])
            {
                streak = 0;
                curr = nums[i];
            }
            while(i < n && nums[i] == curr)
            {
                i++;
            }
            curr++;
            streak++;
            res = max(res, streak);
        }
        return res;
    }
};

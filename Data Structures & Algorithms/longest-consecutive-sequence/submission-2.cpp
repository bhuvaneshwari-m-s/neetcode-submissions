class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        int res = 0;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            if(mp[nums[i]])
            continue;
            int len = mp[nums[i] - 1] + mp[nums[i] + 1] + 1;
            mp[nums[i]] = len;
            mp[nums[i] - mp[nums[i] - 1]] = mp[nums[i]];
            mp[nums[i] + mp[nums[i] + 1]] = mp[nums[i]];
            res = max(res, len);
        }
        return res;
    }
};

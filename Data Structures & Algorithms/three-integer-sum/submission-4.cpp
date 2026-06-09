class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        unordered_map<int,int> map;
        for(int num : nums)
            map[num]++;

        for(int i = 0 ; i < n ; i++)
        {
            map[nums[i]]--;

            if(i > 0 && nums[i] == nums[i-1])
                continue;

            for(int j = i + 1 ; j < n ; j++)
            {
                map[nums[j]]--;
                if(j > i + 1 && nums[j] == nums[j-1])
                    continue;
                
                int target = -(nums[i] + nums[j]);
                if(map[target] > 0)
                    res.push_back({nums[i], nums[j], target});
            }   

            for(int j = i + 1 ; j < n ; j++)
                map[nums[j]]++;
        }

        return res;
    }
};

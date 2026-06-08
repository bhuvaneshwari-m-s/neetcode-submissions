class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int res = 0;
        for(int num : set)
        {
            if(set.count(num-1))
                continue;
            int x = num;
            int count = 0;
            while(set.count(x))
            {
                x++;
                count++;
            }
            res = max(res, count);
        }
        return res;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        unordered_map<int,int> map;
        for(int num : nums)
        {
            map[num]++;
        }

        for(auto it : map)
        {
            bucket[it.second].push_back(it.first);
        }

        for(int i = n ; i >= 0 ; i--)
        {
            int m = bucket[i].size();
            for(int j = 0 ; j < m ; j++)
            {
                res.push_back(bucket[i][j]);
                if(res.size() == k)
                    return res;
            }
        }
        return res;
    }
};

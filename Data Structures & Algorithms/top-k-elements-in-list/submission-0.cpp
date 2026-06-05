class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> res;
        unordered_map<int,int> map;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            map[nums[i]]++;
        }

        for(auto it : map)
        {
            pq.push({it.second, it.first});
            if(pq.size() > k)
                pq.pop();
        }

        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

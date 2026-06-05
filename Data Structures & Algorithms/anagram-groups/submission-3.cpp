class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> map;
        for(string curr : strs)
        {
            vector<int> freq(26, 0);
            for(int i = 0 ; i < curr.size() ; i++)
                freq[curr[i] - 'a']++;

            string key = to_string(freq[0]);
            for(int i = 1 ; i < 26 ; i++)
                key += ',' + to_string(freq[i]);

            map[key].push_back(curr);
        }

        for(auto it : map)
        {
            res.push_back(it.second);
        }
        return res;
    }
};

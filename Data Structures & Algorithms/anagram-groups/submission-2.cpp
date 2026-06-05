class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> map;
        for(string curr : strs)
        {
            string temp = curr;
            sort(temp.begin(), temp.end());
            map[temp].push_back(curr);
        }

        for(auto it : map)
        {
            res.push_back(it.second);
        }
        return res;
    }
};

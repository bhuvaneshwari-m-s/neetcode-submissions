class Solution {
public:
    vector<int> lens;
    string encode(vector<string>& strs) {
        int n = strs.size();
        lens.resize(n);
        string s = "";
        for(int i = 0 ; i < n ; i++)
        {
            lens[i] = strs[i].size();
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int n = lens.size();
        int m = s.size();
        int idx = 0;
        for(int i = 0; i  < n ; i++)
        {
            int len = lens[i];
            int j = idx;
            string curr = "";
            while(j < idx + len)
            {
                curr += s[j];
                j++;
            }
            idx = j;
            res.push_back(curr);
        }
        return res;
    }
};

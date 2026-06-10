class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0;
        int right = 0;
        unordered_map<char, int> set;
        while(right < s.length())
        {
            char ch = s[right];
            if(set.count(ch))
            {
                left = max(left, set[ch] + 1);
            }
            set[ch] = right;
            int curr = right - left + 1;
            res = max(res, curr);
            right++;
        }
        return res;
    }
};

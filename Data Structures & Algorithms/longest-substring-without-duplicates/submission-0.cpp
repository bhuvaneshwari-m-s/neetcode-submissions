class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0;
        int right = 0;
        unordered_set<char> set;
        while(right < s.length())
        {
            char ch = s[right];
            while(set.count(ch))
            {
                set.erase(s[left++]);
            }
            set.insert(ch);
            int curr = right - left + 1;
            res = max(res, curr);
            right++;
        }
        return res;
    }
};

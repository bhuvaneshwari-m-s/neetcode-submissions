class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mapt, maps;
        for(char ch : t)
            mapt[ch]++;
        int start = -1;
        int minLen = s.length() + 1;

        int need = mapt.size();
        int formed = 0;
        int l = 0;
        int r = 0;
        while(r < s.length())
        {
            char ch = s[r];
            maps[ch]++;
            if(maps[ch] == mapt[ch])
                formed++;
            while(need == formed)
            {
                int len = r - l + 1;
                if(len < minLen)
                {
                    start = l;
                    minLen = len;
                }
                maps[s[l]]--;
                if(maps[s[l]] < mapt[s[l]])
                    formed--;
                l++;
            }
            r++;
        }
        if(start == -1)
            return "";
        return s.substr(start, minLen);
    }
};

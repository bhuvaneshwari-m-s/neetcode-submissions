class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for(char ch : s1)
            freq1[ch-'a']++;

        int l = 0;
        for(int r = 0 ; r < s2.length() ; r++)
        {
            freq2[s2[r]-'a']++;
            bool flag = true;
            for(int i = 0 ; i < 26 ; i++)
            {
                if(freq1[i] != freq2[i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return true;

            while(freq2[s2[r]-'a'] > freq1[s2[r]-'a'])
            {
                freq2[s2[l]-'a']--;
                l++;
            }
        }
        return false;
    }
};

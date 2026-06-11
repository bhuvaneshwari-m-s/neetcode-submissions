class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for(char ch : s1)
            freq1[ch-'a']++;

        for(int i = 0 ; i < s2.length() ; i++)
        {
            vector<int> freq2(26, 0);
            for(int j = i ; j < s2.length() ; j++)
            {
                freq2[s2[j]-'a']++;
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
            }
        }

        return false;
    }
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;

        for(int i = 0 ; i < s.length() ; i++)
        {
            vector<int> freq(26, 0);
            int maxFreq = 0;
            int modi = k;
            for(int j = i ; j < s.length() ; j++)
            {
                char ch = s[j];
                freq[ch-'A']++;
                maxFreq = max(maxFreq, freq[ch-'A']);
                int len = j - i + 1;
                if(len > maxFreq + k)
                    break;
                else
                    res = max(res, len);
            }
        }

        return res;
    }
};

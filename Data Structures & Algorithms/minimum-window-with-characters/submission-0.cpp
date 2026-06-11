class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(256,0);
        int maxLength = s.length() + 1;
        int start = -1;
        for(char ch : t)
            freq[ch]++;

        for(int i = 0 ; i < s.length() ; i++)
        {
            vector<int> freqs(256, 0);
            for(int j = i ; j < s.length() ; j++)
            {
                freqs[s[j]]++;
                if(j-i+1 >= t.length())
                {
                    bool flag = true;
                    for(int i = 0 ; i < 256 ; i++)
                    {
                        if(freq[i] > freqs[i])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if(flag && maxLength > j - i + 1)
                    {
                        maxLength = j - i + 1;
                        start = i;
                    }
                }
            }
        }
        if(start == -1)
        return "";

        return s.substr(start, maxLength);
    }
};

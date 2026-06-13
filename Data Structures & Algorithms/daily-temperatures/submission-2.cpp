class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> res(n, 0);

        for(int i = n - 2 ; i >= 0 ; i--)
        {
            int j = i + 1;
            while(j < n)
            {
                if(temps[j] <= temps[i] && res[j] == 0)
                {
                    res[i] = 0;
                    break;
                }
                if(temps[j] <= temps[i] && res[j] != 0)
                {
                    j = j + res[j];
                }
                else
                {
                    res[i] = j - i;
                    break;
                }
            }
        }
        return res;
    }
};

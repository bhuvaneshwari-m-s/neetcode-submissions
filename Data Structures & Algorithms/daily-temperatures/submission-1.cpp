class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> res(n, 0);

        for(int i = 0 ; i < n-1 ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                if(temps[j] > temps[i])
                {
                    res[i] = j - i;
                    break;
                }
            }
        }
        return res;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int minn = prices[0];
        for(int i = 1 ; i < prices.size() ; i++)
        {
            if(prices[i] < minn)
                minn = prices[i];
            else
                res = max(res, prices[i] - minn);
        }
        return res;
    }
};

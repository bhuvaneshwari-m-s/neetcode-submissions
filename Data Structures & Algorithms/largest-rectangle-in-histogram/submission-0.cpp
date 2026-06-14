class Solution {
public:
    int largestRectangleArea(vector<int>& hts) {
        int n = hts.size();
        int maxArea = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int l = i;
            int r = i;
            
            while(l >= 0 && hts[l] >= hts[i])
                l--;

            while(r <= n-1 && hts[r] >= hts[i])
                r++;

            int width = r - l - 1;
            maxArea = max(maxArea, width * hts[i]);
        }
        return maxArea;
    }
};

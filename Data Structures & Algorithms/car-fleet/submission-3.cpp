class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;
        vector<pair<int,int>> cars;
        int n = position.size();
        for(int i = 0 ; i < n ; i++)
        {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int,int>>());

        for(int i = 0 ; i < n ; i++)
        {
            
            double time =  (double)(target - cars[i].first) / cars[i].second;
                if(!st.empty() && st.top() >= time)
                {
                    continue;
                }
                else
                    st.push(time);
               
        }

        return st.size();
    }
};

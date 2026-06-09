class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;
        for(int i = 0 ; i < numbers.size() ; i++)
        {
            int num = numbers[i];
            if(map.count(target - num))
                return {map[target - num] + 1, i + 1};
            map[num] = i;
        }
        return {-1};
    }
};

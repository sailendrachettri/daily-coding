class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < numbers.size(); i++){
            mp[numbers[i]] = i;
        }

        for(int i = 0; i < numbers.size(); i++){
            auto it = mp.find(target-numbers[i]);

            if(it != mp.end()){
                return {i+1, it->second+1};
            }
        }

        return {-1, -1};
    }
};
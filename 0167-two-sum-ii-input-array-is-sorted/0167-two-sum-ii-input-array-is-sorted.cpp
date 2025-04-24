class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> mp;

        for(int i = 0; i < numbers.size(); i++){
            auto it = mp.find(target-numbers[i]);

            if(it != mp.end()){
                if(it->first + numbers[i] == target) 
                    return {it->second+1, i+1};
            }else{
                mp.insert({numbers[i], i});
            }
        }

        return {-1, -1};
    }
};
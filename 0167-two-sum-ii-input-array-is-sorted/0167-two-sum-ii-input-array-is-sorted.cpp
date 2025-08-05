class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hash;
        
        for(int i = 0; i < numbers.size(); i++){
            auto it = hash.find(target-numbers[i]);

            if(it != hash.end()){
                if(numbers[i]+it->first == target)
                    return {it->second, i+1};
            }else{
                hash[numbers[i]] = i+1;
            }
        }

        return {-1, -1};


    }
};
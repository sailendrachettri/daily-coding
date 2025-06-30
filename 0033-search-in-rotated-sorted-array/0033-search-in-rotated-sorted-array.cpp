class Solution {
public:
    int search(vector<int>& nums, int target) {
        map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] = i;
        }
        
        auto it = freq.find(target);

        if(it != freq.end()){
            return it->second;
        }

        return -1;
    }
};
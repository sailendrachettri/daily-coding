class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> freq;

        for(int val : nums){
            freq[val]++;
        }

        nums.clear();

        for(auto it : freq){
            for(int i = 0; i < it.second && i < 2; i++){
                nums.push_back(it.first);
            }
        }

        return nums.size();
    }
};
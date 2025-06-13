class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> freq;

        for(int num : nums)
            freq[num]++;
        

        nums.clear();

        for(auto it : freq){
            for(int i = 1; i <= 2 && i <= it.second; i++){
                nums.push_back(it.first);
            }
        }

        return nums.size();

    }
};
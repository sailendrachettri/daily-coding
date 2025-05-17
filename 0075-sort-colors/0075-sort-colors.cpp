class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> freq;

        for(int  num : nums)
            freq[num]++;

        nums.clear();

        for(auto it : freq){
            int size = it.second;

            while(size--){
                nums.push_back(it.first);
            }
        }
    }
};
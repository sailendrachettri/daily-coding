class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        int sum = 0;

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            if(it.second == 1)
                sum += it.first;
        }

        return sum;
    }
};
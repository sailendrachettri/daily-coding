class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        int maxi = INT_MIN, num;

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            if(it.second > maxi){
                maxi = it.second;
                num = it.first;
            }
        }

        return num;
    }
};
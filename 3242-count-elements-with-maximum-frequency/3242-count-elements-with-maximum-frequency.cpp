class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> freq;
        vector<int> arr;
        int ans = 0;

        for(int val : nums)
            freq[val]++;
        
        for(auto it : freq){
            arr.push_back(it.second);
        }

        int val = *max_element(arr.begin(), arr.end());

        for(int num : arr){
            if(val == num)
                ans += num;
        }

        return ans;


    }
};
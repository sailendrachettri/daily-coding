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

        sort(arr.begin(), arr.end(), greater<int>());

        int val = arr[0];

        for(int num : arr){
            if(val != num)
                break;
            ans += num;
        }

        return ans;


    }
};
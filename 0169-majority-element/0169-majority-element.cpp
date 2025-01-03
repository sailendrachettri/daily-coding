class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans = INT_MIN;
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }


        for(auto it : freq){
            cout << it.first << " -> " << it.second << endl;
            if(it.second > maxi){
                ans = it.first;
                maxi = it.second;
            }
        }

        return ans;

        
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int ans = 1;
        int maxi = INT_MIN;

        
        set<int> st;
        for(int val : nums){
            st.insert(val);
        }

        nums.clear();
        for(int val : st){
            nums.push_back(val);
        }
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-1; i++){
            if(abs(nums[i]-nums[i+1]) == 1)
                ans += 1;
            else{
                maxi = max(ans, maxi);
                ans = 1;
            }
        }

        return ans>maxi ? ans : maxi;
    }
};
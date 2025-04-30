class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        
        for(int val : nums){
            string str = to_string(val);
            if(str.size() % 2 == 0)
                ans++;
        }

        return ans;
    }
};
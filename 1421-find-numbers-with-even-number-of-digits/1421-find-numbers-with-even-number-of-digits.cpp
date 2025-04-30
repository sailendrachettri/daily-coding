class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for(int val : nums){
            int cnt = 0;

            while(val){
                cnt++;
                val = val / 10;
            }

            cout << cnt << endl;

            if(cnt % 2 == 0)
                ans++;
        }

        return ans;

        
    }
};
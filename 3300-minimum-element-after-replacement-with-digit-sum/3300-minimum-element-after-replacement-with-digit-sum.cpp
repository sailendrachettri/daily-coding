class Solution {
public:
    int ans = INT_MAX;

    int minElement(vector<int>& nums) {
        for(int &val : nums){
            long long sum = 0;
            long long num = val;

            while(num){
                sum += num%10;
                num = num / 10;
            }

            val  = sum;
            cout << val << " ";
            ans = min(ans, val);
        }

        return ans;
    }
};
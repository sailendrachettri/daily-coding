class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> arr;
        int maxi = INT_MIN;
        int start, end;
        long long sum = 0;

        for(int &val : nums){
            if(maxi < val){
                maxi = val;
            }
            arr.push_back(__gcd(val, maxi));
        }

        sort(arr.begin(), arr.end());

        start = 0, end = arr.size()-1;

        while(start < end){
            int ans = __gcd(arr[start++], arr[end--]);

            sum += ans;
        }

        // for(int &val : arr){
        //     cout << val << " ";
        // }

        return sum;
    }
};
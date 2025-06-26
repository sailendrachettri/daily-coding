class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int start = 0;
        int end = 0;
        int ans = INT_MIN;
        int sum = 0;
        
        while(end < arr.size()){
            
           sum = sum + arr[end];
           
           if(end-start+1 < k){
               end++;
           }
           else if(end-start+1 == k){
               ans = max(ans, sum);
               sum -= arr[start];
               start++;
               end++;
           }
        }
        
        return ans;
    }
};
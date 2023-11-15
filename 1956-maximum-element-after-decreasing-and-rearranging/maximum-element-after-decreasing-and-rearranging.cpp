class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        arr[0] = 1;
        int result = 1;

        for(auto &num : arr)
            result = min(result+1, num);
        
        return result;
    }
};
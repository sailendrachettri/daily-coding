class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxi;

        for(int i = 0; i < n-1; i++){
             maxi = INT_MIN;
            for(int j = i+1; j < n; j++){
                maxi = max(maxi, arr[j]);
            }
            arr[i] = maxi;
        }
        arr.pop_back();
        arr.push_back(-1);

        return arr;
    }
};
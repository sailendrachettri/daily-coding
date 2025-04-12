class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        int last;

        for(int i = arr.size()-1; i >= 0; i--){
            // cout << arr[i] << endl;
            last = arr[i];
            arr[i] = maxi;
            maxi = max(last, maxi);

            cout << last << " " << maxi << endl;
        }

        return arr;
    }
};
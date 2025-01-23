class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++){
            int maxi = arr[i+1];
            for(int j = i+1; j < arr.size(); j++){
                maxi = max(arr[j], maxi);
            }

            arr[i] = maxi;
        }

        arr.pop_back();

        arr.push_back(-1);

        return arr;
    }
};
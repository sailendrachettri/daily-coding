class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();

        sort(arr.begin(), arr.end(), greater<int>());

        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                if(arr[i] == 2 * arr[j])
                    return true;
            }
        }

        sort(arr.begin(), arr.end());

        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                if(arr[i] == 2 * arr[j])
                    return true;
            }
        }

        return false;
    }
};
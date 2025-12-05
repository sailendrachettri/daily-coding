class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int idx = 0;
        int n = arr.size();

        while(idx < n){
            if(arr[idx] == 0){
                arr.insert(arr.begin()+idx, 0);
                idx+=2;
                arr.pop_back();
                continue;
            }
            idx++;
        }
    }
};
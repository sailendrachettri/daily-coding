class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> unq;

        for(int i = 0; i < arr.size(); i++){
            bool is_present = false;

            for(int j = 0; j < arr.size(); j++){
                if(i != j && arr[i] == arr[j]){
                    is_present = true;
                    break;
                }
            }

            if(!is_present){
                unq.push_back(arr[i]);
            }
        }

        if(unq.size() < k) return "";

        return unq[k-1];
    }
};
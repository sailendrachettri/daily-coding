class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> ans;

        for(int i = 0; i < arr.size(); i++){
            bool present = false;

            for(int j = 0; j < arr.size(); j++){
                if(arr[i] == arr[j] && i != j){
                    present = true;
                    break;
                }
            }

            cout << (present ? 'T' : 'F') << " " << arr[i] << endl;

            if(!present)
                ans.push_back(arr[i]);
        }

        for(string s : ans)
            cout << s << " ";
        cout << endl;

        cout << ans.size() << endl;

        if(ans.size() < k)
            return "";
            
        return ans[k-1];
    }
};
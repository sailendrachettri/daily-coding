//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        map<int, int> freq;
        int mis = INT_MIN;
        int dub = INT_MIN;
        
        
        for(int i = 1; i <= arr.size(); i++){
            freq[i] = 0;
        }
        
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        
        // for(auto it : freq){
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout << "====" << endl;
        
        for(auto it : freq){
            if(it.second == 0)
                mis = it.first;
            
            if(it.second > 1)
                dub = it.first;
        }
        
        return {dub, mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
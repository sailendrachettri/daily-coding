//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int res = 0;
        int n = arr.size();
        
        unordered_map<int, int> mp;
        int pre_sum = 0;
        
        for(int i = 0; i < n; i++){
            pre_sum += arr[i];
            
            if(pre_sum == 0) res = i+1;
            
            if(mp.find(pre_sum) == mp.end()){
                mp[pre_sum] = i;
            } else {
                res = max(res, i-mp[pre_sum]);
            }
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
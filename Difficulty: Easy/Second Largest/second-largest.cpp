//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        int maxi = arr[0];
        int sec = -1;
        
        if(arr.size() == 1) return -1;
        
        for(int i = 1; i < arr.size(); i++){
            if(maxi < arr[i])
                maxi = arr[i];
        }
        
        // cout << maxi << endl;
        
        // second max value
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > sec && sec < maxi && arr[i] != maxi)
                sec = arr[i];
        }
        
        return sec;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
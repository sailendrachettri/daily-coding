//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int count = 0;
        int n = arr.size();
        int alreadySorted = true;
        
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1])
                alreadySorted = false;
        }
        
        if(alreadySorted)
            return 0;
        
        for(int i = 0; i < n; i++){
            
            count++;
            
            if(arr[i+1] < arr[i])
                return count;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
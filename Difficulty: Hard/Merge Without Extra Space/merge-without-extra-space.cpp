//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int a_size = a.size();
        int b_size = b.size();
        
        for(int val : a){
            ans.push_back(val);
        }
        
        for(int val : b){
            ans.push_back(val);
        }
        
        sort(ans.begin(), ans.end());
        
        a.clear();
        b.clear();
        
        for(int i = 0; i < a_size; i++){
            a.push_back(ans[i]);
        }
        
        // cout << endl << "Printing all values: " << endl;
        
        // for(int val : ans){
        //     cout << val << " ";
        // }
        // cout << endl;
        
        for(int i = 0; i < b_size; i++){
            b.push_back(ans[a_size++]);
            // a_size++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        vector<int> starts;
        vector<int> ends;
        
        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr[0].size()-1; j++){
                starts.push_back(arr[i][j]);
                ends.push_back(arr[i][j+1]);
            }
        }
        
        sort(begin(starts), end(starts));
        sort(begin(ends), end(ends));
        
        for(int i = 0; i < starts.size() - 1; i++){
            if(starts[i+1] < ends[i]) return false;
        }
        
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        cin.ignore();
        Solution obj;
        bool ans = obj.canAttend(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int ct_0 = 0;
        int ct_1 = 0;
        int ct_2 = 0;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0)
                ct_0++;
            else if(arr[i] == 1)
                ct_1++;
            else 
                ct_2++;
        }
        
        arr.clear();
        
        for(int i = 1; i <= ct_0; i++){
            arr.push_back(0);
        }
        for(int i = 1; i <= ct_1; i++){
            arr.push_back(1);
        }
        for(int i = 1; i <= ct_2; i++){
            arr.push_back(2);
        }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
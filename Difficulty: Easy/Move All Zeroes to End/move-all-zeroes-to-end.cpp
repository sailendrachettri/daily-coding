//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector<int> nonZeros;
        int countZeros = 0;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0){
                nonZeros.push_back(arr[i]);
                continue;
            } else
                countZeros++;
        }
        
        arr.clear();
        
        for(int i = 0; i < nonZeros.size(); i++){
            arr.push_back(nonZeros[i]);
        }
        
        for(int i = 0; i < countZeros; i++){
            arr.push_back(0);
        }
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
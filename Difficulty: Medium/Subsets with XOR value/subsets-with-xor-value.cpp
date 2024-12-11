//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    int fun(int i, int t, vector<int> &arr, int &N, int &K, vector<vector<int>> &dp){
        if(i >= N){
            if(t == K)
                return 1;
        
            return 0;
        }
        
        if(dp[i][t] != -1)
            return dp[i][t];
            
        int tt = fun(i+1, t^arr[i], arr, N, K, dp);
        int nt = fun(i+1, t, arr, N, K, dp);
        
        return dp[i][t] = tt + nt;
        
    }

    int subsetXOR(vector<int> arr, int N, int K) {
        vector<vector<int>> dp(1001, vector<int>(1001, -1));
        return fun(0, 0, arr, N, K, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends
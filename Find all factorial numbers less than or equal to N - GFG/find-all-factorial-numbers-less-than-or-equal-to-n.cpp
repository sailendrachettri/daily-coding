//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long getFactorial(long long N)
    {
        
        if(N == 0)
        {
            return 1;
        }
        
        return N * getFactorial(N-1);
    }

    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> v;
        long long res;
        
        
        for(int i = 1; i <= N; i++)
        {
            res = getFactorial(i);
            
            if(res <= N)
            {
                v.push_back(res);
            }
            else
                break;
        }
        
        return v;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends
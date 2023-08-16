//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // reverse(str.begin(), str.end());
        // return str;
        
        string reverse = "";
        
        for(int i = str.size()-1; i >= 0; i--)
        {
            reverse += str[i];
        }
        
        // cout << "size: " << str.size() << endl << "reverse: " << reverse << endl;
        
        return reverse;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends
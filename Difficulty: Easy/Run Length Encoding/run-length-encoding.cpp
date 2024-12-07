//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string encode(string s) {
        int count = 1;
        char ch;
        string ans = "";
        
        int size = s.size();
        
        for(int i = 0; i < size; i++){
            
            ch = s[i];
            
            while((s[i] == s[i+1]) && i < size-1){
                i++;
                count++;
            }
                
            ans += ch;
            ans += to_string(count);
            
            count = 1; // reset
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
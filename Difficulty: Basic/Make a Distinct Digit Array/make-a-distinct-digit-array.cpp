//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    vector<int> ans;
   	    set<int> unq;
   	    
   	    for(int i = 0; i < nums.size(); i++){
   	        int val = nums[i];
   	        
   	        while(val){
   	            ans.push_back(val%10);
   	            val = val / 10;
   	        }
   	    }
   	    
   	    for(int i = 0; i < ans.size(); i++){
   	        unq.insert(ans[i]);
   	    }
   	    
   	    ans.clear();
   	    
   	    for(int val : unq){
   	        ans.push_back(val);
   	    }
   	    
   	    return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends
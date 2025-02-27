int dp[1000][1000];
class Solution {
    unordered_map<int, int> x2i;
    int ans=0;
    int f(int i1, int i2, vector<int>& arr){
        if (dp[i1][i2]!=-1) return dp[i1][i2];
        int f1=arr[i1], f2=arr[i2], f0=f2-f1;
        if (f0>=f1) return dp[i1][i2]=2;
        int len=2;
        if (x2i.count(f0)){
            int i0=x2i[f0];
            len=f(i0, i1, arr)+1;
            ans=max(ans, len);
        }
        return dp[i1][i2]=len;
    }

public:
    int lenLongestFibSubseq(vector<int>& arr) {
        const int n=arr.size(); 
        x2i.reserve(n);
        fill(&dp[0][0], &dp[0][0]+n*1000, -1);
        
        for (int i=0; i < n; i++) 
            x2i[arr[i]]=i;
        
        for (int i1=1; i1<n-1; i1++) 
            for (int i2=i1+1; i2<n; i2++)
                f(i1, i2, arr); 


        return ans>2?ans:0;  //length>2
    }
};
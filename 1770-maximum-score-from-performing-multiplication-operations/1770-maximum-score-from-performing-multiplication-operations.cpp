class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int m=mul.size();
    int n=nums.size();
    vector<int>pre(m+1,0), cur(m+1,0);
    for(int i=m-1; i>=0; i--){
        for(int l=i; l>=0; l--)
            cur[l]=max(nums[l]*mul[i]+pre[l+1],nums[n-1+l-i]*mul[i]+pre[l]);
        pre=cur;
    }
    return cur[0];
}
    
};
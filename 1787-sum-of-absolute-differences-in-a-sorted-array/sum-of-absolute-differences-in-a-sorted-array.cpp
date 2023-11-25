class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& n) {
        vector<int> ans(n.size(),0);
        int ns=n.size();
        for(int i=0; i<1;i++){
            int temp=0;
            for(int j=0; j<ns; j++){
                temp=temp+abs(n[i]-n[j]);
            }
            ans[0]=temp;;
        }
        for(int i=1;i<ns;i++){
            ans[i]=ans[i-1]+(n[i]-n[i-1])*i-(n[i]-n[i-1])*(ns-i);
        }
        return ans;
    }
};
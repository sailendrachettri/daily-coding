class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> ans;
        int val = 1, idx = 0;

        while(idx < target.size()){
            st.push(val++);
            ans.push_back("Push");

            if(st.top() != target[idx]){
                ans.push_back("Pop");
                st.pop();
            }else idx++;
        }

        return ans;
    }
};
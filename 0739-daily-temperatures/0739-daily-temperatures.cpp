class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        vector<int> ans(t.size(), 0);
        int right = t.size();

        while(right--){
            while(!st.empty() && t[right] >= t[st.top()]){
                st.pop();
            }

            if(!st.empty()){
                ans[right] = st.top() - right;
            }

            st.push(right);
        }

        return ans;
    }
};
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st;

        for(auto  a : paths){
            auto x = a[0];
            st.insert(x);
        }

        for(auto a : paths){
            auto y = a[1];
            if(st.find(y) == st.end()){
                return y;
            }
        }

        return "";
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> st;
        vector<int> ed;

        for(vector<int> vec : intervals){
            st.push_back(vec[0]);
            ed.push_back(vec[1]);
        }

        sort(begin(st), end(st));
        sort(begin(ed), end(ed));

        intervals.clear();

        for(int i = 0; i < st.size()-1;){
            if(st[i+1] <= ed[i]){
                st.erase(st.begin()+(i+1));
                ed.erase(ed.begin()+i);

                if(i > 0) i--;
            }else{
                i++;
            }
        }

        for(int i = 0; i < st.size(); i++){
            intervals.push_back({st[i], ed[i]});
        }

        return intervals;
    }
};
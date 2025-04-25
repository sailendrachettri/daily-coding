class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<int> st;
        vector<int> ed;

        st.push_back(newInterval[0]);
        ed.push_back(newInterval[1]);

        for(auto it : intervals){
            st.push_back(it[0]);
            ed.push_back(it[1]);
        }

        sort(begin(st), end(st));
        sort(begin(ed), end(ed));

        for(int val : st)
            cout << val << " ";
        cout << endl;
        for(int val : ed)
            cout << val << " ";
        
        intervals.clear();

        for(int i = 0; i < st.size()-1;){
            if(st[i+1] <= ed[i]){
                st.erase(st.begin()+(i+1));
                ed.erase(ed.begin()+i);
                if(i > 0)
                    i--;
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
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> starts;
        vector<int> ends;

        for(int i = 0; i < intervals.size(); i++){
            for(int j = 0; j < intervals[0].size()-1; j++){
                starts.push_back(intervals[i][j]);
                ends.push_back(intervals[i][j+1]);
            }
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        for(int i = 0; i < starts.size()-1;){
            if(starts[i+1] <= ends[i]){
                starts.erase(starts.begin()+i+1);
                ends.erase(ends.begin()+i);
                if(i > 0)
                    i--;
            }else{
                i++;
            }
        }

        intervals.clear();

        for(int i = 0; i < starts.size(); i++){
            intervals.push_back({starts[i], ends[i]});
        }

        return intervals;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> start;
        vector<int> ends;

        for(int i = 0; i < intervals.size(); i++){
            for(int j = 0; j < intervals[0].size()-1; j++){
                start.push_back(intervals[i][j]);
                ends.push_back(intervals[i][j+1]);
            }
        }

        intervals.clear();

        sort(begin(start), end(start));
        sort(ends.begin(), ends.end());

       for(int i = 0; i < start.size()-1;){
            if(start[i+1] <= ends[i]){
                start.erase(start.begin()+i+1);
                ends.erase(ends.begin()+i);

                if(i > 0){
                    i--;
                }
            }else{
                    i++;
                }
       }

       for(int i = 0; i < start.size(); i++){
            intervals.push_back({start[i], ends[i]});
       }

        return intervals;
    }
};
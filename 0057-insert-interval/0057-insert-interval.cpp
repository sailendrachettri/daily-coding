class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<int> starts, ends;

        for(vector<int> arr : intervals){
            starts.push_back(arr[0]);
            ends.push_back(arr[1]);
        }

        starts.push_back(newInterval[0]);
        ends.push_back(newInterval[1]);

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        for(int i = 1; i < starts.size();){
            if(starts[i] <= ends[i-1]){
                starts.erase(starts.begin()+i);
                ends.erase(ends.begin()+(i-1));
            }else
                i++;
        }

        intervals.clear();

        for(int i = 0; i < starts.size(); i++){
            intervals.push_back({starts[i], ends[i]});
        }

        return intervals;
    }
};
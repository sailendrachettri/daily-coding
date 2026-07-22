class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int start = 0, end = (m[0].size()*m.size()) - 1;

        // cout << m.size() << " " << m[0].size();

        while(start <= end){
            int mid = midpoint(start, end);

            cout << mid << " ";

            int res = m[mid/m[0].size()][mid%m[0].size()];

            if(res == t) return true;
            else if(res > t) end = mid - 1;
            else start = mid + 1;
        }

        return false;
    }
};
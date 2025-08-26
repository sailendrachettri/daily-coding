class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int ans = 0;
        double dig = INT_MIN;

        for(vector<int> &arr : d){
            double temp = (arr[0]*arr[0]) + (arr[1]*arr[1]);
            cout << temp << " ";
            temp = sqrt(temp);
            cout << temp << endl;

            if(temp == dig){
                ans = max(ans, arr[0]*arr[1]);
                continue;
            }
            if(temp > dig){
                ans = arr[0]*arr[1];
                dig = temp;
            }
        }

        return ans;
    }
};
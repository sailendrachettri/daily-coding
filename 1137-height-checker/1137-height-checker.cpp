class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int size = heights.size();
        vector<int> temp;
        temp = heights;

        sort(begin(temp), end(temp));

        int ans = 0;

        for(int i = 0; i < size; i++){
            cout << heights[i] << " = " << temp[i] << endl;
            if(heights[i] != temp[i])
                ans++;
        }

        return ans;
    }
};
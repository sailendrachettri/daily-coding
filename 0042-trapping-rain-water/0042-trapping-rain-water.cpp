class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>max_left(height.size(), 0);
        vector<int>max_right(height.size(), 0);
        vector<int>mini(height.size(), 0);
        int size = height.size();
        int count = 0;

        for(int i = 1; i < size; i++){
            max_left[i] = max(max_left[i-1], height[i-1]);
        }

        for(int i = size-2; i >= 0; i--){
            max_right[i] = max(max_right[i+1], height[i+1]);
        }

        for(int i = 0; i < size; i++){
            mini[i] = min(max_left[i], max_right[i]);
        }

        for(int val : mini)
            cout << val << " ";

        for(int i = 0; i < size; i++){
            int val = mini[i] - height[i];
            if(val > 0) count += val;
        }

        return count;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft(height.size(), 0);
        vector<int> maxRight(height.size(), 0);
        vector<int> mini(height.size(), 0);
        int size = height.size();

        int count = 0;

        for(int i = 1; i < size; i++)
            maxLeft[i] = (max(height[i-1], maxLeft[i-1]));

        for(int i = size-2; i >= 0; i--)
            maxRight[i] = (max(height[i+1], maxRight[i+1]));

        for(int i = 0; i < size; i++)
            mini[i] = min(maxLeft[i], maxRight[i]);

        for(int i = 0; i < size; i++){
            int val = mini[i]- height[i];

            if(val < 0)
                val = 0;
            count += val;
        }

        return count;
    }
};
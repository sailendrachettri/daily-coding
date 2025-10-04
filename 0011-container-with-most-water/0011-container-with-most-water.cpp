class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int ans = 0;

        while(start < end){
            int h = min(height[start], height[end]);
            int w = end - start;

            ans = max(ans, h*w);

            if(height[start] > height[end])
                end--;
            else
                start++;
        }

        return ans;
    }
};
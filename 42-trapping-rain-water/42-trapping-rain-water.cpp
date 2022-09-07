class Solution {
public:
    int trap(vector<int>& height) {
        
        long long int n = height.size();
        long long int left = 0, right = n-1;
        long long int res = 0;
        long long int maxLeft = 0, maxRight = 0;
        
        while(left <= right)
        {
            if(height[left] <= height[right])
            {
                if(height[left] >= maxLeft)
                    maxLeft = height[left];
                else
                    res += maxLeft - height[left];
                
                left++;
            }
            
            else
            {
                if(height[right] >= maxRight)                    
                    maxRight = height[right];
                else
                    res += maxRight - height[right];
                
                right--;
            }
        }
        
        return res;
    }
};
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int> > res;
        
        if(nums.empty() )
            return res;
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end() );
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                long long target2 = (long long) target - nums[j] - nums[i];
                
                int front = j + 1;
                int back = n - 1;
                
                while(front < back)
                {
                    int twoSum = nums[front] + nums[back];
                    
                    if(twoSum < target2)
                        front++;
                    
                    else if(twoSum > target2)
                        back--;
                    
                    else
                    {
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] =     nums[i];
                        quadruplet[1] =     nums[j];
                        quadruplet[2] =     nums[front];
                        quadruplet[3] =     nums[back];
                        res.push_back(quadruplet);
                        
                        while(front < back and nums[front] == quadruplet[2])
                            front++;
                        
                        while(front < back and nums[back] == quadruplet[3])
                            back--;
                    }
                }
                
                while(j+1 < n and nums[j+1] == nums[j])
                    j++;
            }
            
            while(i+1 < n and nums[i+1] == nums[i])
                    i++;
        }
        
        return res;
        
    }
};
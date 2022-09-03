class Solution {
    
    void dfs(int num, int n, int k, vector<int> &result)
    {
        if(n == 0)
        {
            result.push_back(num);
            return ;
        }
        
        int last_digit = num % 10;
        int temp = 0;
        
        if(last_digit >= k)
        {
            temp = num * 10 + last_digit - k;
            dfs(temp, n-1, k, result);
        }
        
        if(k > 0 and last_digit + k < 10)
        {
            temp = num * 10 + last_digit + k;
            dfs(temp, n-1, k, result);
        }
            
        
    }
    
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> result;
        
        if(n == 1)
            result.push_back(0);
        
        for(int d = 1; d <= 9; d++)
        {
            dfs(d, n-1, k, result);
        }
        
        return result;
    }
};
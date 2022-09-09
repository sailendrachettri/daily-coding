class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(), properties.end() );
        
        int ans = 0;
        int size = properties.size();
        int a = properties[size-1][0];
        int b = properties[size-1][1];
        int lmax = properties[size-1][1];
        
        for(int i = size-2; i >= 0; i--)
        {
            if(properties[i][0] < properties[i+1][0])
            {
                b = max(lmax, b);
                lmax = max(b, properties[i][1]);
            }
            
            if(properties[i][0] < a and properties[i][1] < b)
                ans++;
        }
        
        return ans;
    }
};
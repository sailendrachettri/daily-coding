class Solution {
public:
    int longestPalindrome(vector<string>& s) {
        
        map<string, int> m, m2;
        int cnt = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            string s1 = s[i];
            if(s1[0] == s1[1])
                m2[s1]++;
            else
                m[s1]++;            
        }
        
        int sum = 0;
        
        for(auto x : m2)
        {
            if(x.second % 2 != 0)
            {
                int z = x.second - 1;
                cnt++;
                sum += 2 * z;
            }
            else
                sum += 2 * x.second;
        }
        
        for(auto x : m)
        {
            string z = x.first;
            string w = z;
            
            reverse(w.begin(), w.end() );
            
            if(m.find(w) != m.end() )
            {
                int a = m[z];
                int b = m[w];
                int n = min(a, b);
                
                sum += n * 4;
                m.erase(w);
            }                
        }
        
        if(cnt > 0)
            sum += 2;
        
        return sum;
    }
};



















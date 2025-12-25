class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long sum = 0;
        int neg = 1;
        sort(h.begin(), h.end(), greater<int>());

        if(k == 1){
            return *max_element(h.begin(), h.end());
        }

        for(int i = 0; i < k; i++){
            if(h[i] > 0)
                sum += h[i];
            
            if(i < h.size()-1)
                h[i+1] -= neg++;
        }

        return sum;        
    }
};
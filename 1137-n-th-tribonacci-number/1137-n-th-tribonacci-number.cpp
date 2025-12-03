class Solution {
public:
    int tribonacci(int n) {
        
        long long a = 0, b = 1, c = 1, d;
        vector<long long> arr = {a, b, c};

        for(int i = 0; i < n; i++){
            d = a + b + c;
            arr.push_back(d);
            a = b;
            b = c;
            c = d;
        }
        
        return arr[n];
    }
};
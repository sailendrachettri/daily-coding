class StockSpanner {
public:
    vector<int> arr;

    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 1;
        int idx = arr.size() - 1;

        while(arr.size() > 0 && idx >= 0 && arr[idx] <= price){
            ans++;
            idx--;
        }

        arr.push_back(price);

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
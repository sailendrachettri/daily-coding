class MinStack {
public:
    vector<int> arr, minArr;

    MinStack() {
        
    }
    
    void push(int val) {
        arr.push_back(val);

        if(minArr.empty())
            minArr.push_back(val);
        else minArr.push_back(min(val, minArr.back()));
    }
    
    void pop() {
        arr.pop_back();
        minArr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return minArr.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
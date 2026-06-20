class MinStack {
public:
    stack<int> nums;
    stack<int> min;
    int cmin = 2147483647;
    MinStack() {
        min.push(cmin);
    }
    
    void push(int val) {
        nums.push(val);
        if(val <= cmin){
            cmin = val;
            min.push(val);
        }
    }
    
    void pop() {
        if(nums.top() == cmin){
            min.pop();
            cmin = min.top();
        }
        nums.pop();
    }
    
    int top() {
        return nums.top();
    }
    
    int getMin() {
        return min.top();
    }
};

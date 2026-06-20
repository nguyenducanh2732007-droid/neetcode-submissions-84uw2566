class MinStack {
public:
    stack<int> nums;
    stack<int> min;
    int cmin;
    MinStack() {

    }
    
    void push(int val) {
        nums.push(val);
        if(min.empty() or val <= cmin){
            cmin = val;
            min.push(val);
        }
    }
    
    void pop() {
        if(nums.top() == cmin){
            min.pop();
            if(!min.empty())cmin = min.top();
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

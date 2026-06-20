class MinStack {
public:
    stack<int> nums;
    stack<int> min;
    MinStack() {

    }
    
    void push(int val) {
        nums.push(val);
        if(min.empty() or val <= min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(nums.top() == min.top()){
            min.pop();
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

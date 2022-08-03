class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(!temp.empty())
        {
        temp.push_back({val, min(val, temp.back().second)});
        }
        else
        {
        temp.push_back({val, val});
        }
    }
    
    void pop() {
        temp.pop_back();
    }
    
    int top() {
        return temp.back().first;
    }
    
    int getMin() {
        return temp.back().second;
    }
    
private:
    vector<pair<int, int>> temp;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
//다른 사람 코드 참조함
class MinStack {
public:
    /** initialize your data structure here. */

    stack<pair<int, int>> minStack;

    MinStack() {

    }

    void push(int x) {
        int min;
        if(minStack.empty()){
            min = x;
        }
        else{
            min = std::min(x, minStack.top().second);
        }
        minStack.push({x, min});
    }

    void pop() {
        minStack.pop();
    }

    int top() {
        return minStack.top().first;
    }

    int getMin() {
        return minStack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

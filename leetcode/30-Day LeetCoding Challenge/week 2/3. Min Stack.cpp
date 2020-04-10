class MinStack {
public:
    /** initialize your data structure here. */

    int S[10000];
    int minNum[10000];
    int topNum;

    MinStack() {
        topNum = 0;
    }

    void push(int x) {
        if(topNum == 0){
            minNum[topNum] = x;
        }
        else{
            minNum[topNum] = min(x, minNum[topNum-1]);
        }
        S[topNum] = x;
        topNum++;
    }

    void pop() {
        if(topNum>0) topNum--;
    }

    int top() {
        return S[topNum-1];
    }

    int getMin() {
        return minNum[topNum-1];
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

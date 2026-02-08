class MinStack {
public:
    stack<int> s, mn;

    MinStack() {}

    void push(int val) {
        s.push(val);
        if(mn.empty() || val <= mn.top())
            mn.push(val);
        else
            mn.push(mn.top());
    }

    void pop() {
        s.pop();
        mn.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return mn.top();
    }
};

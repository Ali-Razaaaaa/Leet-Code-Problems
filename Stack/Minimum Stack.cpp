#include <vector>
using namespace std;

class MinStack {
public:
    vector<int> stack;
    vector<int> minStack;

    MinStack() {}

    void push(int val) {
        stack.push_back(val);

        // Push to minStack if it's the first element or a new minimum
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }

    void pop() {
        if (!stack.empty()) {
            // Also pop from minStack if the value being removed is the min
            if (stack.back() == minStack.back()) {
                minStack.pop_back();
            }
            stack.pop_back();
        }
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return minStack.back(); // O(1) access to current min
    }
};

#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
public:
    vector<int> stack;  

    MinStack() {

    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        }
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        if (!stack.empty()) {
            return *min_element(stack.begin(), stack.end());
        }
        return -1;
    }
};

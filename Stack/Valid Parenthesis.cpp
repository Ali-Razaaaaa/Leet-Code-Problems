class Solution {
public:
    bool isValid(string s) {
        stack<char> t;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                t.push(')');
            }
            else if (s[i] == '{') {
                t.push('}');
            }
            else if (s[i] == '[') {
                t.push(']');
            }
            else {
                // Closing bracket aaya
                if (t.empty() || t.top() != s[i]) {
                    return false;
                }
                t.pop();
            }
        }

        return t.empty();
        //([{}])
    }
};
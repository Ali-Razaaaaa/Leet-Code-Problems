class Solution {
public:
    string reverseString(const string &s) {
        string result(s.length(), ' '); 
        int j = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            result[j++] = s[i];
        }
        return result;
    }

    bool isPalindrome(string s) {
        string filtered = "";
        for (int i = 0; i < s.length(); i++) { // Traditional for-loop
            if (isalnum(s[i])) filtered += tolower(s[i]);
        }
        return filtered == reverseString(filtered);
    }
};

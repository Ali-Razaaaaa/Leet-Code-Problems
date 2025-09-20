class Solution {
public:
    bool isPalindrome(string s) {

        int start=0;
       

        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                s[start++] = tolower(s[i]);
            }
        }
        s.resize(start);
         int end=s.length()-1;
        start=0;
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
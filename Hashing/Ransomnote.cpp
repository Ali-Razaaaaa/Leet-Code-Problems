#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash;
        
        for(int i = 0; i < magazine.length(); i++)
        {
            hash[magazine[i]]++;
        }
        
        for(int i = 0; i < ransomNote.length(); i++)
        {
            char c = ransomNote[i];
            if(hash[c] > 0)
            {
                hash[c]--;
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};

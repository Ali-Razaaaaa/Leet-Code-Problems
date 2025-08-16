#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums)
    {
        unordered_map<int, string> myMap;
        vector<int> vec;

        for (int i = 0; i < nums.size(); i++)
        {
            int value = nums[i];
            myMap[value] = "false";
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int value = nums[i];

            if (myMap[value] == "false")
            {
                int count = 1;
                myMap[value] = "true";
                
                int left = value - 1;
                while (myMap.find(left) != myMap.end() && myMap[left] == "false")
                {
                    myMap[left] = "true";
                    count++;
                    left--;
                }

                int right = value + 1;
                while (myMap.find(right) != myMap.end() && myMap[right] == "false")
                {
                    myMap[right] = "true";
                    count++;
                    right++;
                }

                vec.push_back(count);  
            }
        }

        int maxLen = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            maxLen = std::max(maxLen, vec[i]);
        }

        return maxLen;
    }
};

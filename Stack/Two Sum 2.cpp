class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> allnumbers;
        int left=0;
        int right=numbers.size()-1;

        while(left<right)
        {
            int sum=numbers[left]+numbers[right];

            if(sum==target)
            {
                allnumbers.push_back(left+1);
                allnumbers.push_back(right+1);
                break;
            }
            else if(sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
            

        }

        return allnumbers;
        
    }
};

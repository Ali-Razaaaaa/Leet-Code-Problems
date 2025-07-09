class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> result;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int left=i+1;
            int right=nums.size()-1;

            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                
                if(sum==0)
                {
                    vector<int> triplet={nums[i], nums[left], nums[right]};
                    
                    result.insert(triplet);
                    left++;
                    right--;
                }
                else if(sum>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
         return vector<vector<int>>(result.begin(), result.end());
    }
};

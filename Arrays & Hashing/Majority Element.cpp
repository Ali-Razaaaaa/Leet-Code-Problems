class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int x=0;
        unordered_map<int,int> hash;

        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(auto &p:hash)
        {
            if(p.second>nums.size()/2)
            {
                x=p.first;
            }
        }
        return x;
    }
};
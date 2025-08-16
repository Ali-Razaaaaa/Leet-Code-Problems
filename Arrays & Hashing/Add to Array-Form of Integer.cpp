class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k)
    {
        long long digits=0;
        
        for(int i=0;i<num.size();i++)
        {
            digits=digits*10+num[i];
        }
        digits+=k;
        
        vector<int> results;

        while(digits>0)
        {
            int x=digits%10;
            results.push_back(x);
            digits/=10;
        }
        reverse(results.begin(), results.end());

        return results;
    }
};
class Solution {
public:

    string encode(vector<string>& strs)
    {
        char newChar = '`';
        string results;

        for (int i = 0; i < strs.size(); i++)
        {
            strs[i] = strs[i].append(1, newChar); // Add '#' to each string
        }

        for (int i = 0; i < strs.size(); i++)
        {
            results += strs[i]; // Combine into one string
        }

        return results;
    }

    vector<string> decode(string s)
    {
        vector<string> result;
        string temp = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '`')
            {
                result.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }

        return result;
    }
};

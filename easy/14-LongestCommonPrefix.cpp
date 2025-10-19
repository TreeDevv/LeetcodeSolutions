class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = strs[0];
        for (string &str : strs)
        {
            for (int i = 0; i < longest.length(); i++)
            {
                if (str[i] != longest[i])
                    longest = longest.substr(0, i);
            }
        }

        return longest;
    }
};

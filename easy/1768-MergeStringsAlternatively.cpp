class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        word1.erase(remove_if(word1.begin(), word1.end(), ::isspace), word1.end());
        word2.erase(remove_if(word2.begin(), word2.end(), ::isspace), word2.end());
        stringstream ss;

        for (int i = 0; i < max(word1.length(), word2.length()); i++)
        {
            if (i < word1.length()) ss << word1[i];
            if (i < word2.length()) ss << word2[i];
        }
        return ss.str();
    }
};

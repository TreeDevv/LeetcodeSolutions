class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char, bool> vowels = {
            {'a', true},
            {'e', true},
            {'i', true},
            {'o', true},
            {'u', true},
        };

        vector<int> vowelPositions;

        for (int i = 0; i < s.length(); i++) {
            if (vowels[tolower(s[i])]) vowelPositions.push_back(i);
        }

        string return_string = s;
        for (int i = 0; i < vowelPositions.size(); i++) {
            return_string[vowelPositions[i]] = s[vowelPositions[vowelPositions.size() - 1 - i]];
        }

        return return_string;
    }
};

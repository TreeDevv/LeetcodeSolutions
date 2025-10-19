class Solution {
public:
    bool isValid(string s) {
        stack<char> tokens;
        unordered_map<char, char> expressions = {
            {'[', ']'},
            {'{', '}'},
            {'(', ')'},
        };
        for (char &c : s)
        {
            if (expressions.find(c) != expressions.end()) {
                tokens.push(c);
            } else {
                if (tokens.empty() || expressions[tokens.top()] != c)
                    return false;
                else
                    tokens.pop();
            }
        }

        return tokens.empty();
    }
};

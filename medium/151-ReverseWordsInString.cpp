class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;

        stack<string> stack;
        while (ss >> word) {
            stack.push(word);
        }

        stringstream answer;
        while (!stack.empty()) {
            answer << stack.top();
            stack.pop();

            if (!stack.empty()) answer << " ";
        }
        return answer.str();
    }
};

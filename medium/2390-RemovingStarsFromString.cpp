class Solution {
public:
    string removeStars(string s) {
        stack<char> chars;
        string answer = "";
        for (char &c : s) {
            chars.push(c);
        }

        int starCount = 0;
        while (!chars.empty()) {
            char top = chars.top();
            if (top == '*') {
                starCount++;
                chars.pop();
            } else if (starCount > 0) {
                chars.pop();
                starCount--;
            } 
            else {
                answer.push_back(top);
                chars.pop();
            }
        }
        reverse(answer.begin(), answer.end());
        return answer;
        
    }
};

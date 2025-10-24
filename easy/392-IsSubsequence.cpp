class Solution {
public:
    bool isSubsequence(string s, string t) {

         int foundLetters = 0;

         for (int i = 0; i < t.length(); i++) {
            if (t[i] == s[foundLetters]) {
                foundLetters++;
            }
         }
         return (foundLetters == s.length());
    }
};

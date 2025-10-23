class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n + 1);
        for (int i = 0; i < n + 1; i++) {
            int c = i;
            int count = 0;
            while (c != 0) {
                c &= (c - 1);
                count++;
            }
            answer[i] = count;
        }

        return answer;
    }
};

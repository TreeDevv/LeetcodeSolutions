class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        while (a || b || c) {
            int abit = a & 1;
            int bbit = b & 1;
            int cbit = c & 1;

            if (cbit && (!abit && !bbit)) {
                flips++;
            }
            if (!cbit && (abit && bbit)) {
                flips += 2;
            } else if(!cbit && (abit || bbit)) {
                flips++;
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return flips;
    }
};

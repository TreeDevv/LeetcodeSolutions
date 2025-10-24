class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height = 0;
        int highest = 0;
        for (int &g: gain) {
            height += g;
            if (height > highest) highest = height;
        }

        return highest;
    }
};

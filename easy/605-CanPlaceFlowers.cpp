class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int openSpaces = 0;
        for (int i = 0; i < flowerbed.size(); i++) {    
            if (flowerbed[i] == 0 && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) && (i == 0 || flowerbed[i - 1] == 0)) {
                openSpaces++;
                flowerbed[i] = 1;

                if (openSpaces >= n) return true;
            }
        }
        // Check edge cases

        return (openSpaces >= n) ? true : false;
    }
};

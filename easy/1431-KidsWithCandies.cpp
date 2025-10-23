class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandies) maxCandies = candies[i];
        }

        for (int i = 0; i < candies.size(); i++) {
            result.push_back((candies[i] + extraCandies >= maxCandies) ? true : false);
        }
        return result;
    }
};

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int lowNumber = INT_MAX;
        int highNumber = INT_MAX;
        for (int &n : nums) {
            if (n <= lowNumber) lowNumber = n;
            else if (n <= highNumber) highNumber = n;
            else return true;
        }
        return false;
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tooAdd = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                tooAdd++;
                i--;
            }
        }
        for (int i = 0; i < tooAdd; i++) {
            nums.push_back(0);
        }
    }
};

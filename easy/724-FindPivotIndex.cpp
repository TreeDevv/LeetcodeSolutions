class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        unordered_map<int, int> right;
        unordered_map<int, int> left;
        for (int i = 0; i < nums.size(); i++)  {
            left[i] = left[i - 1] + nums[i];
            right[nums.size() - i - 1] = right[nums.size() -i] + nums[nums.size() - i - 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (left[i-1] == right[i+1]) return i;
        }
        return -1;
    }
};

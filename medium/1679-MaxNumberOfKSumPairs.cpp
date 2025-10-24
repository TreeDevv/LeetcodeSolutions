class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ops = 0;
        unordered_map<int, int> solutions;
        for (int i = 0; i < nums.size(); i++) {
            if (solutions[nums[i]] && solutions[nums[i]] > 0) {
                ops++;
                solutions[nums[i]]--;
            } else {
                solutions[k - nums[i]]++;
            }
        }
        return ops;
    }
};

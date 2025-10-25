class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        vector<unordered_set<int>> memo(2);

        for (int i = 0; i < max(nums1.size(), nums2.size()); i++) {
            if (i < nums1.size()) {
                memo[0].insert(nums1[i]);
            }
            if (i < nums2.size()) {
                memo[1].insert(nums2[i]);
            }
        }

        for (int i = 0; i < max(nums1.size(), nums2.size()); i++) {
            if (i < nums1.size() && !memo[1].count(nums1[i])) {
                answer[0].push_back(nums1[i]);
                memo[1].insert(nums1[i]);
            }
            if (i < nums2.size() && !memo[0].count(nums2[i])) {
                answer[1].push_back(nums2[i]);
                memo[0].insert(nums2[i]);
            }
        }
        return answer;
    }
};

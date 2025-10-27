class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixProducts {1};
        vector<int> suffixProducts {1};
        prefixProducts.resize(nums.size());
        suffixProducts.resize(nums.size());

        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int prefixProduct = (i == 0) ? 1 : prefixProducts[i-1] * nums[i-1];
            prefixProducts[i] = prefixProduct;

            int suffixProduct = (i == 0) ? 1 : suffixProducts[nums.size() - i] * nums[nums.size() - i];
            suffixProducts[nums.size() - 1 - i] = (suffixProduct);
        }
        for (int i = 0; i < nums.size(); i++) {
            result[i] = prefixProducts[i] * suffixProducts[i];
        }

        return result;
    }
};

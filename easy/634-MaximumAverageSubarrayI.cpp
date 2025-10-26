class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxValue = -1000000;
        int left = 0; 
        int right = k -1;

        double sum = 0;
        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }
        maxValue = sum / k;
        for (int i = 0; i < nums.size() - (k); ++i) {
            right++;
            left++;
            
            sum -= nums[left - 1];
            sum += nums[right];
            if (sum / k > maxValue) maxValue = sum / k;
        }
        return maxValue;
    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
        int greatestArea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left <= right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            if (h * w > greatestArea) {
                greatestArea = h * w;
            }

            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }
        return greatestArea;
    }
};

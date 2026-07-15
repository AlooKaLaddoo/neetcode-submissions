class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxL = 0, maxR = 0, left = 0, right = n - 1, totalWater = 0;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                if (height[left] >= maxL)
                    maxL = height[left];
                else
                    totalWater += (maxL - height[left]);
                left++;
            }
            else
            {
                if (height[right] >= maxR)
                    maxR = height[right];
                else
                    totalWater += (maxR - height[right]);
                right--;
            }
        }
        return totalWater;
    }
};

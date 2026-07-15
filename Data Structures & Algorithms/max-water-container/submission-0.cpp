class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0, right = n - 1;
        int maxWat = (right - left) * min(heights[left], heights[right]);
        while (left < right)
        {
            maxWat = max(maxWat, (right - left) * min(heights[left], heights[right]));
            if (heights[left] > heights[right])
                right--;
            else
                left++;
        }
        return maxWat;
    }
};

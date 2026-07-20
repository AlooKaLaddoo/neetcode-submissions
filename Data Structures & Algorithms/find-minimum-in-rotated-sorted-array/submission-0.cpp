class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums.at(mid) > nums.at(right))
                left = mid + 1;
            else if (nums.at(mid) < nums.at(right))
                right = mid;
        }
        return nums.at(left);
    }
};

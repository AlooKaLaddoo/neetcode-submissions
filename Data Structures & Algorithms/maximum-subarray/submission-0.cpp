class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums.at(0), sumCurr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sumCurr < 0) {
                sumCurr = 0;
            }
            sumCurr += nums.at(i);
            maxSum = max(maxSum, sumCurr);
        }
        return maxSum;
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        int  robPrevPrev = 0, robPrev = 0;
        for (int i = 0; i < nums.size(); i++) {
            int maxRob = max(nums.at(i) + robPrevPrev, robPrev);
            robPrevPrev = robPrev;
            robPrev = maxRob;
        }
        return robPrev;
    }
};

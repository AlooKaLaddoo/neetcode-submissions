class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1)
            return 1;
        int oneStep = 1, twoStep = 1;
        for (int i = 2; i <= n; i++)
        {
            int iReach = oneStep + twoStep;
            oneStep = twoStep;
            twoStep = iReach;
        }
        return twoStep;
    }
};

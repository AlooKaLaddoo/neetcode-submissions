class Solution {
public:
    vector<int> doNotCalcAgain;
    
    Solution() : doNotCalcAgain(46, 0) {
        doNotCalcAgain[0] = 1;
        doNotCalcAgain[1] = 1;
    }
    
    int climbStairs(int n) {
        if (doNotCalcAgain[n])
            return doNotCalcAgain[n];
        return doNotCalcAgain[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};

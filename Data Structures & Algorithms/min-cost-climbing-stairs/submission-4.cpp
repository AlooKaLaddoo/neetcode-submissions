class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev2 = cost[0], prev1 = cost[1];
        for (int pos = 2; pos < cost.size(); pos++) {
            int costTillCurr = cost[pos] + min(prev2, prev1);
            prev2 = prev1;;
            prev1 = costTillCurr;
        }
        return min(prev1, prev2);
    }
};

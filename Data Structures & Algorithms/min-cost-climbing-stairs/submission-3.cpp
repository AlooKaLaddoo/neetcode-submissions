class Solution {
// this is O(n) space
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> costTillCurr(n + 1, 0);
        costTillCurr[0] = cost[0];
        costTillCurr[1] = cost[1];
        for (int pos = 2; pos < n; pos++) {
            costTillCurr[pos] = cost[pos] +  min(costTillCurr[pos - 1], costTillCurr[pos - 2]);
        }
        return min(costTillCurr[n - 1], costTillCurr[n - 2]);
    }
};

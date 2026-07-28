class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ones(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            ones[i] = ones[i >> 1] + (i & 1);
        }
        return ones;
    }
};
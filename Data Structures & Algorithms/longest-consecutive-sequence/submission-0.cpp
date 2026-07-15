class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> elExists(nums.begin(), nums.end());
        for (int i  : elExists)
        {
            if (!elExists.count(i - 1))
            {
                int length = 1;
                int curr = i;
                while (elExists.count(++curr ))
                    length++;
                ans = max(ans, length);
            }
        }
        return ans;
    }
};

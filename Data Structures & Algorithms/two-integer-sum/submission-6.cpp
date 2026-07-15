class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> valueIndex;
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (valueIndex.count(complement))
            {
                int j = valueIndex[complement];
                return {min(i, j), max(i, j)};
            }
            valueIndex.insert({nums[i], i});
        }
        return {};
    }
};

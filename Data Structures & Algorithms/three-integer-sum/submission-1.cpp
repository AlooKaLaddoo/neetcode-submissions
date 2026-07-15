class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> resTriplets;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int target = -1 * nums[i];
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                if (target > nums[j] + nums[k])
                    j++;
                else if (target < nums[j] + nums[k])
                    k--;
                else
                {
                    resTriplets.push_back({nums[i], nums[j++], nums[k--]});
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return resTriplets;
    }
};

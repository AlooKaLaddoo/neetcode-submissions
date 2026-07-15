class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int i : nums)
            freqMap[i]++;
        
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto &[element, freq] : freqMap)
            buckets[freq].push_back(element);

        vector<int> result;
        for (int i = buckets.size() - 1; i >=0 && result.size() < k; i--)
        {
            for (int num : buckets[i])
            {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }
        return result;
    }
};

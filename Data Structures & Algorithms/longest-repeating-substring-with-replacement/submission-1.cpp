class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int maxSubLen = 0, maxFreqChar = 0, left = 0, n = s.size();
        for (int right = 0; right < n; right++)
        {
            freq[s[right]]++;
            maxFreqChar = max(maxFreqChar, freq[s[right]]);
            if ((right - left + 1) - maxFreqChar > k)
            {
                freq[s[left]]--;
                left++;
            }
            maxSubLen = max(maxSubLen, right - left + 1);
        }
        return maxSubLen;
    }
};

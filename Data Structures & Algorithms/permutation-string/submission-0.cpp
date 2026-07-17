class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.size(), size2 = s2.size();
        if (size1 > size2) return false;
        vector<int> freq_s1(26, 0);
        for (int i = 0; i < size1; i++) {
            freq_s1[s1[i] - 'a']++;
        }
        vector<int> freqSub_s2(26, 0);
        int left = 0, right = 0;
        while (right < size1 - 1) {
            freqSub_s2[s2[right] - 'a']++;
            right++;
        }
        while (right < size2) {
            freqSub_s2[s2[right] - 'a']++;
            if (freq_s1 == freqSub_s2) {
                return true;
            }
            freqSub_s2[s2[left] - 'a']--;
            left++;
            right++;
        }
        return false;
    }
};
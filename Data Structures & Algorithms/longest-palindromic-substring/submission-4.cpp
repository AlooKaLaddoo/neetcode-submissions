class Solution {
public:
    string longestPalindrome(string s) {
        int l, r, maxPalSubLen = 1, sLen = s.length();
        string maxPalSub = string(1, s.at(0));
        // when the longest palindromic substring is odd
        for (int i = 0; i < sLen; i++) {
            l = i;
            r = i;
            int palSubLen = 1;
            string palSub = "";
            while (l - 1 >= 0 && r + 1 < sLen) {
                if (s.at(l - 1) != s.at(r + 1)) break;
                l--;
                r++;
                palSubLen += + 2;
            }
            palSub = s.substr(l, palSubLen );
            if (palSubLen > maxPalSubLen) {
                maxPalSubLen = palSubLen;
                maxPalSub = palSub;
            }
        }
        // when the longest palindromic substring is even
        for (int i = 0; i < sLen - 1; i++) {
            l = i;
            r = i + 1;
            if (s.at(l) != s.at(r)) continue;
            int palSubLen = 2;
            string palSub = "";
            while (l - 1 >= 0 && r + 1 < sLen) {
                if (s.at(l - 1) != s.at(r + 1)) break;
                l--;
                r++;
                palSubLen += 2;
            }
            palSub = s.substr(l, palSubLen);
            if (palSubLen > maxPalSubLen) {
                maxPalSubLen = palSubLen;
                maxPalSub = palSub;
            }
        }
        return maxPalSub;
    }
};
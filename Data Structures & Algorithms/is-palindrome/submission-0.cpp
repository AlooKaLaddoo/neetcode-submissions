class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        string strToCheck;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                strToCheck = strToCheck + (char)tolower(s[i]);
            else if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
                strToCheck = strToCheck + s[i];
        }
        int backCount = strToCheck.length() - 1;
        int forwardCount = 0;
        while (forwardCount <= backCount)
            if (strToCheck[forwardCount++] != strToCheck[backCount--])
                return false;
        return true;
    }
};

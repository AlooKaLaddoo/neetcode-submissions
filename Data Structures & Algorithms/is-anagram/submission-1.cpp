class Solution {
public:
    bool isAnagram(string s, string t) {
        int length_s = s.length();
        int length_t = t.length();
        for (int i = 97; i < 123; i++)
        {
            char toCheck = static_cast<char>(i);
            int freqIn_s = 0, freqIn_t = 0;
            for (int j = 0; j < length_s; j++)
            {
                if (s[j] == toCheck)
                    freqIn_s ++;
            }
            for (int k = 0; k < length_t; k++)
            {
                if (t[k] == toCheck)
                    freqIn_t ++;
            }
            if (freqIn_s != freqIn_t)
                return false;
        }
        return true;
    }
};

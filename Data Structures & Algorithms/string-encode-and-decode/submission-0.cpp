class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for (int i = 0; i < strs.size(); i ++)
            encoded_string = encoded_string + to_string(strs[i].length()) + "#" + strs[i];
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;
        while (i < s.length())
        {
            int j = i;
            while (s[j] != '#')
                j++;
            int lenStr = stoi(s.substr(i, j - i));
            decoded_strs.push_back(s.substr(j + 1, lenStr));
            i = j + lenStr +1;
        }
        return decoded_strs;
    }
};

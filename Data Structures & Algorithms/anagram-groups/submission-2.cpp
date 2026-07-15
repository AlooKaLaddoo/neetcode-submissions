class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freqMap;
        for (string &str : strs)
        {
            vector<int> freq(26, 0);
            for (char ch : str)
                freq[ch - 'a']++;

            string key = "";
            for (int i = 0; i < 26; i++)
                key += '#' + freq[i];

            freqMap[key].push_back(str);
        }

        vector<vector<string>> result;
        for (auto &[key, anagrams] : freqMap)
            result.push_back(anagrams);
        
        return result;
    }
};

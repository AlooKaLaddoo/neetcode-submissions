class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits.at(i) != 9) {
                digits.at(i)++;
                return digits;
            }
            digits.at(i) = 0;
        }
        vector<int> outputWhenAllNine(digits.size() + 1);
        outputWhenAllNine.at(0) = 1;
        return outputWhenAllNine;
    }
};

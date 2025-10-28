class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty()) return vector<int>{1};
        for(int i = digits.size()-1; i >= 0; --i) {
            digits[i]++;
            if(digits[i] < 10) return digits;
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

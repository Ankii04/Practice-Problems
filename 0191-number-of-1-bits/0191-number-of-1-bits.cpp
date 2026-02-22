class Solution {
public:
    int hammingWeight(int n) {
        int count = __builtin_popcount(n);
        return count;
    }
};
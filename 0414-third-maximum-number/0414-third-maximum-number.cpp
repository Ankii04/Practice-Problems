class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first1 = LLONG_MIN;
        long long first2 = LLONG_MIN;
        long long first3 = LLONG_MIN;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] > first1) first1 = nums[i];
        }

        for(int i=0;i<nums.size();i++) {
            if(nums[i] < first1 && nums[i] > first2) first2 = nums[i];
        }

        for(int i=0;i<nums.size();i++) {
            if(nums[i] < first2 && nums[i] > first3) first3 = nums[i];
        }

        if(first2 == LLONG_MIN || first3 == LLONG_MIN) return first1;
        return first3;
    }
};

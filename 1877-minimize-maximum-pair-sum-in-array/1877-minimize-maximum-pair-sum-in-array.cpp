class Solution {
public:
    int minPairSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int maxans = -1;
     int start = 0,end = nums.size()-1;
     while(start<end)
     {
        maxans = max(maxans,nums[start]+nums[end]);
        start++,end--;
     }   
     return maxans;
    }
};
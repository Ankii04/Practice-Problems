class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        long long currSum = 0 , minSum = 0;
        int left = 0;
        for(int right = 0;right<nums.size();right++)
        {
            currSum+=nums[right];
            while(currSum>=target)
            {
                if(right-left+1 <minlen)
                {
                    minlen = right - left + 1;
                }
                    currSum-=nums[left];
                    left++;
            }
        }
        return minlen!=INT_MAX? minlen:NULL;
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+2,-1);
        return find(0,nums,dp,n);
    }
    int find(int index,vector<int>&nums,vector<int>&dp,int n)
    {   
        if(index>=n)
        {
            return 0;
        }
       if(dp[index]!=-1)
       {
        return dp[index];
       }
        return dp[index] = max(nums[index]+find(index+2,nums,dp,n),find(index+1,nums,dp,n));
    }
};
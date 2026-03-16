class Solution {
public:
    int solve(vector<int>&nums,int n)
    {
        vector<int>ans(n+1);
        ans[0]=0;
        ans[1]=nums[0];
        for(int i=2;i<=n;i++)
        {
            int steal = nums[i-1]+ans[i-2];
            int skip =  ans[i-1];
            ans[i]=max(steal,skip);
        }
        return ans[n];

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,n);
    }
};
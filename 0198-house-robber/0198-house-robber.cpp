class Solution {
public:
    int solve(vector<int>&nums,int i,vector<int>&arr)
    {   
        if(i>=nums.size())
        {
            return 0;
        }
        if(arr[i]!=-1)
        {
            return arr[i];
        }
        int steal = nums[i]+solve(nums,i+2,arr);
        int skip = solve(nums,i+1,arr);
        return arr[i] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n,-1);
        return solve(nums,0,arr);
    }
};
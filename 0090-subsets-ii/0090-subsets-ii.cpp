class Solution {
public:

    void subsets(vector<int>&nums,vector<int>&ans ,int i,vector<vector<int>>&ssubsets)
    {   
        int n = nums.size();
        if(i==nums.size())
        {
            ssubsets.push_back(ans);
            return;
        }

        // include
        ans.push_back(nums[i]);
        subsets(nums,ans,i+1,ssubsets);

        // exlcude
        ans.pop_back();
        int idx = i+1;
        while(idx<n && nums[idx]==nums[idx-1])
        {
            idx++;

        }
        subsets(nums,ans,idx,ssubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int n = nums.size();
        vector<vector<int>>ssubsets;
        vector<int>ans;
        subsets(nums,ans,0,ssubsets);
        return ssubsets;
    }
};
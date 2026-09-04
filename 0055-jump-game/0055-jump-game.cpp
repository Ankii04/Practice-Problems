class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxm =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {   
            if(i>maxm)
            {
                return false;
            }
            maxm = max(maxm,i+nums[i]);
            if(maxm>=n-1)
            {
                return true;
            }
        }
        return true;
    }
};
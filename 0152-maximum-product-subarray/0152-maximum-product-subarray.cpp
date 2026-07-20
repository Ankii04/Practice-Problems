class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxm = INT_MIN;
        int pref = 1 , suffix = 1 ;
        for(int i=0;i<n;i++)
        {
            if(pref==0)pref = 1;
            if(suffix==0)suffix = 1;

            pref = pref * nums[i];
            suffix = suffix * nums[n-i-1];
            maxm = max(maxm,max(pref,suffix));
        }
        return maxm;
    }
};
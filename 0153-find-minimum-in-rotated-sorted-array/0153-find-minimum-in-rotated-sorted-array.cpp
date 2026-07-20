class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , r = n-1;
        int minm = INT_MAX;
        while(l<=r)
        {   
            int mid = l + (r-l)/2;
            minm = min(minm,nums[mid]);
            if(nums[l]<=nums[mid]){
                minm = min(minm,nums[l]);
                l = mid+1;
            }
            else
            {
                minm = min(minm,nums[mid]);
                r= mid-1;
            }
        
        }
        return minm;
    }
};
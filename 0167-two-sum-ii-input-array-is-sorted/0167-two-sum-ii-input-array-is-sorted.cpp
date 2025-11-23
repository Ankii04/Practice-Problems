class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        int start = 0 , end = n-1; 
        while(start<end)
        {
            if(nums[start]+nums[end]==target)
            {
                ans.push_back(start + 1),ans.push_back(end + 1);
                break;
            }
            else if(nums[start]+nums[end]>target)
            {
                end--;
            }
            else 
            {
                start++;
            }
        }
        return ans;

    
    }
};
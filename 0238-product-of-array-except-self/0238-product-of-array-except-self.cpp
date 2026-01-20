class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int without_zero = 1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {
                without_zero*=nums[i];
            }
        }
        vector<int>result(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                if(count>0)
                {
                    result[i] = 0;
                }
                else
                {
                    result[i]=without_zero/nums[i];
                }
            }
            else if(count == 1) 
            { 
                if(nums[i] == 0) 
                    result[i] = without_zero; 
                else 
                    result[i] = 0; 
            } 
            else
            {
                if(count>0)
                {
                    result[i] = 0;
                }
                else
                {
                    result[i]=without_zero/nums[i];
                }
            }
        }
        return result;
    }
};
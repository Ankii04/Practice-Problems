class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int resultsum = nums[0]+nums[1]+nums[2];

        int mindiff = INT_MAX;

        for(int i=0;i<nums.size()-2;i++)
        {   
            if(i>0 && nums[i]==nums[i-1])continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l<r)
            {
            int sum = nums[i]+nums[l]+nums[r];
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                int diff = abs(sum - target);
                if(diff<mindiff)
                {
                    mindiff = diff;
                    resultsum = sum;
                }
            }
        }
        return resultsum;
    }
};
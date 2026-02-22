class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;
        for(int i=0;i<n;i++)
        {
            xorr = xorr ^ nums[i];
        }
        unsigned int righmost = (unsigned int)xorr & (-(unsigned int)xorr);
        int b = 0 , c =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&righmost)
            {
                b = b ^ nums[i];
            }
            else
            {
                c = c ^ nums[i];
            }
        }
        return {b,c};
    }
};
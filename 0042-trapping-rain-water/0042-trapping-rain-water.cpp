class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n-1;
        int unit = 0;
        int maxl = height[0];
        int maxr = height[n-1];
        while(l<r)
        {
            if(maxl<maxr)
            {
                unit+=maxl - height[l];
                maxl = max(maxl,height[++l]);
            }
            else
            {
                unit+=maxr - height[r];
                maxr = max(maxr,height[--r]);
            }
        }
        return unit;
    }
};
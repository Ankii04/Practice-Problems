class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 , r = height.size()-1;
        int minm = INT_MAX;
        int maxm = INT_MIN;
        int area = 0;
        while(l<r)
        {
            minm = min(height[l],height[r]);
            area = minm * (r-l);
            maxm = max(maxm,area);
            if(height[l]>height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
            
        }
        return maxm;
    }
};
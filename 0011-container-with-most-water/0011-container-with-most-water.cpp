class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int n = height.size();
        int r = n-1;
        int ans = 0;
     
        while(l<r)
        {       
                int w = r-l;
                int h = min(height[l],height[r]);
                ans = max(ans,w*h);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }

        } 
        return ans;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n = height.size();
        int minheight = 0;
        vector<int>leftmax(n) , rightmax(n);
        leftmax[0] = height[0];
        for(int i=1;i<n;i++)
        {
            leftmax[i] = max(height[i],leftmax[i-1]);
        }
        rightmax[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i] = max(height[i],rightmax[i+1]);
        }
        for(int i=0;i<n;i++)
        {   minheight = min(leftmax[i],rightmax[i]);
            if(minheight - height[i]>=0)
            {
            water += minheight - height[i];
            }
        }
        return water;
    }
};
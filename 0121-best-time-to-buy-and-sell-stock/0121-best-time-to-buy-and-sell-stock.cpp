class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int ans = 0;
        for(int a: prices)
        {
            mn = min(mn,a);
            ans = max(ans,a-mn);
        }

        return ans;
    }
};
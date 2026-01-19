class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),profit = 0, mn = prices[0];
       for(int i=1;i<n;i++)
       {
        int diff = prices[i]-mn;
        profit = max(diff,profit);
        mn = min(prices[i],mn);
       }
    return profit;
    }
};
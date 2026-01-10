class Solution {
public:

    int feb(int n , vector<int>&dp)
    {
        if(n==0) return dp[0]=0;
        if(n==1) return dp[1]=1;
        if(dp[n]!=-1) return dp[n];
        dp[n] = feb(n-1,dp)+feb(n-2,dp);
        return dp[n];
    }
    int fib(int n) {

        vector<int>dp(n+1,-1);
        feb(n,dp);

    
        // vector<int>dp(n+1);
        // dp[0]=0;
        // dp[1]=1;
        // for(int j=2;j<=n;j++)
        // {
        //     dp[j]= dp[j-1]+dp[j-2];
        // }
        return dp[n];
    }

};
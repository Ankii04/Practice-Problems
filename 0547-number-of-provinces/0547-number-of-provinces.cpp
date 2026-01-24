class Solution {
public:
    void dfs(int u,vector<vector<int>>&isConnected,vector<bool>&visited)
    {
        visited[u]=1;
        for(int i=0;i<isConnected.size();i++)
        {
            if(isConnected[u][i]==1 &&!visited[i])
            {
                dfs(i,isConnected,visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size(),0);
        int count=0;

        for(int i=0;i<isConnected.size();i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(i,isConnected,visited);
            }
        }
        return count;
    }
};
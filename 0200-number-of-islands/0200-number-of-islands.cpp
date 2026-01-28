class Solution {
public:
    bool check(int i,int j,int r,int c)
    {
        return i>-1 && i<r && j>-1 && j<c;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        // vector<vector<int>>dist(r,vector<int>(c,0));
        queue<pair<int,int>>q;
        
            for(int l=0;l<n;l++)
            {
                for(int g=0;g<m;g++)
                {
                    if(grid[l][g]=='1')
                    {   count++;
                        q.push({l,g});
                        // dist[i][j]=1;
                        grid[l][g]='0';
               
                        int r[8] = {-1,0,0,1};
                        int c[8] = {0,-1,1,0};
                        
                        while(!q.empty())
                        {
                            int i = q.front().first;
                            int j = q.front().second;
                            
                            
                            q.pop();
                            for(int k =0;k<8;k++)
                            {
                            // int nr = rc + ab[k];
                            // int nc = rd + ac[k];
                            
                           if(check(i+r[k],j+c[k],n,m) && grid[i+r[k]][j+c[k]]=='1')
                            {
                                grid[i+r[k]][j+c[k]]='0';
                                q.push({i+r[k],j+c[k]});
                            }
                        }
                    }
                }
        }
        }
        
        
        return count;
        
    }
};

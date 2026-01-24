class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        

        int r = mat.size();
        int c = mat[0].size();

        vector<vector<int>>dist(r,vector<int>(c,-1));

        queue<pair<int,int>>q;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};

        while(!q.empty())
        {   
            int cr = q.front().first;
            int cc = q.front().second;
            q.pop();
            for(int k = 0;k<4;k++)
            {
                int nr = cr+ dr[k];
                int nc = cc+ dc[k];

                if(nr>=0 && nr<r && nc>=0 && nc<c && dist[nr][nc] == -1)
                {
                    dist[nr][nc] = dist[cr][cc] + 1;
                    q.push({nr,nc});
                }
            }
            
        }
            return dist;
    }
};
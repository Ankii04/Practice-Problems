class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        
        vector<vector<int>> adj(V);
        vector<int> indegree(V,0);
        
        for(int i=0;i<prerequisites.size();i++)
        {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            adj[b].push_back(a);
            indegree[a]++;
        }

        
        queue<int>q;
        int count=0;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        
        // vector<int>topo;
        while(!q.empty())
        {
            int node =q.front();
            q.pop();
            count++;
            
            for(auto it: adj[node])
            {   indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
     return count==V;
    }
    
};
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        int u=0;
        int v=0;
        for(int i=0;i<edges.size();i++)
        {
            u=  edges[i][0];
            v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
         vector<int> ans=bfs(n,adj,source);
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==destination)
            {
                return true;
            }
        }
      return false;  
        
    }
    
    vector<int>bfs(int n,vector<vector<int>>&adj,int source)
    {
        vector<int>ans;
        vector<bool>vis(n,false);
        vis[source] = true;
        queue<int>q;
        q.push(source);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it:adj[node])
            {
                if(vis[it]==false)
                {
                    vis[it]=true;
                    q.push(it);
                }
            }
            
        }
        return ans;
    }
};


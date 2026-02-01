class Solution {
public:
    void dfs(vector<int>adjlist[] , vector<int>&vis,int node )
    {
        vis[node] = 1;
        for(auto it:adjlist[node])
        {
            if(!vis[it])
            dfs(adjlist , vis , it);
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<int>adjlist[n];
        vector<int>vis(n,0);
        for(int i = 0;i<n;i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(isConnected[i][j] == 1 && i!=j)
                {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(!(vis[i]))
            {
                count++;
                dfs(adjlist,vis,i);
            }
        }

        return count;

    }


};
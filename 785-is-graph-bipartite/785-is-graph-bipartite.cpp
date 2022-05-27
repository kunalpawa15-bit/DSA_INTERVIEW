class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int>color(n);
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(color[i])continue;
        
        color[i]=1;
        for(q.push(i);!q.empty();q.pop()){
            int node = q.front();
           
            for(int it:graph[node])
            {
                if(!color[it])
                {
                    color[it] = -color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])return false;
            }
        }
        }
        return true;
        
    }
};


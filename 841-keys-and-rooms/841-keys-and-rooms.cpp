class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<int>vis(rooms.size(),false);
        queue<int>q;
        q.push(0);
        vis[0] = true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it:rooms[node])
            {
                if(!vis[it])
                {
                    vis[it]=true;
                    q.push(it);
                    
                }
            }
        }
        
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i]==false)
                return false;
        }
        return true;
    }
};
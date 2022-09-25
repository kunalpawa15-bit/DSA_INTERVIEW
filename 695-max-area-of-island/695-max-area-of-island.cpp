class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = 0;
        int count=1;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]==1 && !vis[i][j])
                maxi = bfs(i,j,grid,vis,n,m,q,count);
                
            }
        }
        return maxi;
    }
   int bfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>>&vis,int n, int m,queue<pair<int,int>>&q,int &a)
{
         int cnt=1;
         int delrow[]={-1,0,1,0};
         int delcol[]={0,1,0,-1};
         vis[row][col]=1;
         q.push({row,col});

         while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
            {
                cnt++;
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
                a = max(a,cnt);
               
            }
            
            
        }
        
    }
    return a;
}
};


/*class Solution {
private:

public:
int maxAreaOfIsland(vector<vector>& grid) {
int n = grid.size();
int m = grid[0].size();
int ans=0;
int a=1;
queue<pair<int,int>>q;
vector<vector>vis(n,vector(m,0));
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
vis[i][j]=0;
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(grid[i][j]==1 && !vis[i][j]){
ans = bfs(i,j,grid,vis,n,m,q,a);
}

        }
    }
   
    return ans;
}
};*/



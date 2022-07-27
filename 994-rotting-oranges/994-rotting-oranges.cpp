class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())return 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        
        int count=0,total=0,days=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)total++;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        
        while(!q.empty())
        {
            int size = q.size();
            count = count+size;
            while(size--)
            {
                int x = q.front().first , y = q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                   int nx = x + dx[i];
                   int ny = y + dy[i];
                    if(nx<0 || ny<0 || nx>=n || ny>=m || grid[nx][ny]!=1)continue;
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
            if(!q.empty())days++;
        }
        
        return total==count?days:-1;
    }
};
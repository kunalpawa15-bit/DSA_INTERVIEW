class Solution {
public:
    bool isvalid(int x,int y,int n,int m)
    {
        if(x<=n || y<=m || m<0 || n<0 )return false;
        return true;
    }
    
    int solution(vector<vector<int>>&grid,int r,int c)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(r==grid.size())return c;
        if(isvalid(n,m,r,c))
        {
            if(grid[r][c]==1)
            {
                if(isvalid(n,m,r,c+1) && grid[r][c+1]==1)
                {
                    return solution(grid,r+1,c+1);
                }
            }
            else
            {
                if(isvalid(n,m,r,c-1) && grid[r][c-1]==-1)
                {
                    return solution(grid,r+1,c-1);
                }
            }
        }
        
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<int>v(m,0);
        for(int i=0;i<m;i++)
        {
            v[i] = solution(grid,0,i);
        }
        
        
        return v;
        
    }
};

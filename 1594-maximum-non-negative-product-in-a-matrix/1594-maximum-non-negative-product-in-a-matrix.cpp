class Solution {
public:
    long prod = -1;
    int mod = 1e9+7;
    int maxProductPath(vector<vector<int>>& grid) {
        
        int n  = grid.size();
        int m = grid[0].size();
       
        
        f(0,0,grid,1,n,m);
        return prod<0?-1:prod%mod;
    }
    void f(int i,int j,vector<vector<int>>&grid,long long ans,int n,int m)
    {
        if(i>=n || j>=m)return ;
        if(grid[i][j]==0)
        {
            if(prod<0)prod = 0;
            return;
        }
        ans = ans*grid[i][j];
        if(i==n-1 && j==m-1)
        {
           if(ans>=prod)prod = ans;
        }
     
        
        f(i+1,j,grid,ans,n,m);
        f(i,j+1,grid,ans,n,m);
        
    }
};





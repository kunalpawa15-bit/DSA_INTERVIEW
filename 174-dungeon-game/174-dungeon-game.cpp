class Solution {
public:
    int check(int i,int j,int n,int m,vector<vector<int>>& dungeon,vector<vector<int>>& dp){
        
        if(i==n || j==m ) return 1e9;
        if(i==n-1 && j==m-1){
           
            if(dungeon[i][j]>0) return 1;
            else return (-dungeon[i][j]+1);
        }
        if(dp[i][j]!=-1) return dp[i][j];
   
        int right=check(i,j+1,n,m,dungeon,dp);
        int down=check(i+1,j,n,m,dungeon,dp);
  
        int mini=min(right,down);
  
        int total=mini-dungeon[i][j];

        return dp[i][j]= total<=0 ? 1 : total;
    }
    
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size();
        int m=dungeon[0].size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        
        return check(0,0,n,m,dungeon,dp);
       
    }
};
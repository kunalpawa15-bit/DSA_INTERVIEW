//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int mod = 1e9+7;
     int f(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
     {
         int n= grid.size();
         int m = grid[0].size();
         if(i>=n || j>=m || grid[i][j]==0)return 0;
         if(i==n-1 && j==m-1)return 1;
         
         //if(i<0 || j<0 )return 0;
         
         if(dp[i][j]!=-1)return dp[i][j]; 
         
         int left = f(i,j+1,grid,dp);
         int up = f(i+1,j,grid,dp);
         
         return dp[i][j] = (left+up)%mod;
     }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return  f(0,0,grid,dp);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends
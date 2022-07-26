class Solution {
public:
    int numSquares(int n) {
       if(n==1)return 1;
        vector<int>v;
        
        for(int i=1;i*i<=n;i++)
        {
           v.push_back(i*i);
        }
        vector<vector<int>>dp(v.size()+1,vector<int>(n+1,-1));
        return f(0,n,v,dp);
        
    }
    int f(int i,int num,vector<int>&v,vector<vector<int>>&dp)
    {
        int n = v.size();
        if(num==0)return 0;
        if(i>=n)return INT_MAX-1;
        
        if(dp[i][num]!=-1)return dp[i][num];
        
        if(v[i]<=num)
        {
             return dp[i][num] =  min(1+ f(i,num-v[i],v,dp),f(i+1,num,v,dp));
        }
        else
        {
            return dp[i][num] =  f(i+1,num,v,dp);
        }
         
    }
    
    
};
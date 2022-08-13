class Solution {
public:
    bool divisorGame(int n) {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
    bool f(int n,vector<int>&dp)
    {
        if(n==1)return false;
        
        if(dp[n]!=-1)return dp[n];
        for(int i=1;i<n;i++)
        {
            if(n%i == 0 && !f(n-i,dp))
                return dp[n] = true;
        }
        return  dp[n] = false;
    }
};


//Recursive solution

 // bool divisorGame(int n) {
 //        return f(n);
 //    }
 //    bool f(int n)
 //    {
 //        if(n==1)return false;
 //        for(int i=1;i<n;i++)
 //        {
 //            if(n%i == 0 && !f(n-i))
 //                return true;
 //        }
 //        return false;
 //    }

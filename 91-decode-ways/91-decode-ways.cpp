class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int>dp(n+1,-1);
        return f(0,s,n,dp);
    }
    
    int f(int i,string s,int n,vector<int>&dp)
    {
        if(i==n)return 1;
        if(s[i]=='0')return 0;
       
        string t = s.substr(i,2);
         if(dp[i]!=-1)return dp[i];
        int one_take = f(i+1,s,n,dp);
       int two_take = 0;
        if(stoi(t)>9 && stoi(t)<=26)
            two_take = f(i+2,s,n,dp);
        
        return dp[i] =  one_take + two_take;
    }
};


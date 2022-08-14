class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int n = days.size();
        vector<int>dp(n+1,-1);
        return f(0,days,costs,dp);
        
    }
    int f(int index,vector<int>&days,vector<int>&cost,vector<int>&dp)
    {
        int n = days.size();
        if(index==n)return 0;
        
        if(dp[index]!=-1)return dp[index];
        int one = cost[0] + f(index+1,days,cost,dp);
        int i= index+1;
        while(i<n && days[i]-days[index]<7)
            i++;
        int seven = cost[1] + f(i,days,cost,dp);
        
        while(i<n && days[i]-days[index]<30)
            i++;
        int thirty = cost[2] + f(i,days,cost,dp);
        
        return dp[index] = min(one,min(seven,thirty));
    }
};



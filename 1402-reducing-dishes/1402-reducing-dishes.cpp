
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(0,0,satisfaction,dp);
        
    }
       int f(int i,int time,vector<int>&nums,vector<vector<int>>&dp)
       {
           int n = nums.size();
          if(i==n)return 0;
           
           if(dp[i][time]!=-1)return dp[i][time];
           int pick = nums[i]*(time+1) + f(i+1,time+1,nums,dp);
           int notpick = 0 + f(i+1,time,nums,dp);
           return dp[i][time] =  max(pick,notpick);
       }
    
};
/* int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        vector<vector<int>>dp(n,vector<int>(n+2,-1));
        return f(0,1,satisfaction,dp);
    }
    
    int f(int i,int time,vector<int>&nums,vector<vector<int>>&dp)
    {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        if(i==n-1)
        {
            if(nums[i]>0)return ans + time*nums[i];
            else return ans;
        };
        
        
        int flag =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                flag=1;
            }
        }
    
        
        if(flag==0)return 0;
        
        if(dp[i][time]!=-1)return dp[i][time];
        
        int notpick = ans +  f(i+1,time,nums,dp);
        int pick = ans+ (nums[i]*time) + f(i+1,time+1,nums,dp);
        
        
        return dp[i][time] =  max(pick,notpick);
        
    }*/

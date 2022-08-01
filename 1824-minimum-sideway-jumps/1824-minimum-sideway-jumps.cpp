class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return f(0,2,obstacles,dp);
    }
    
    int f(int pos,int lane,vector<int>&nums,vector<vector<int>>&dp)
    {
        int n = nums.size();
        if(pos==n-1)return 0;
        
        if(dp[pos][lane]!=-1)return dp[pos][lane];
        if(nums[pos+1]!=lane)
        {
            return dp[pos][lane] =  f(pos+1,lane,nums,dp);
        }
        else
        {
            int ans = INT_MAX;
            for(int i=1;i<=3;i++)
            {
                if(lane!=i && nums[pos]!=i)
                {
                    ans = min(ans,1+f(pos,i,nums,dp));
                }
            }
            return ans;
        }
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int>v1,v2;
        int n = nums.size();
        if(n==1)return nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(i!=0)v1.push_back(nums[i]);
            if(i!=n-1)v2.push_back(nums[i]);
        }
        
        vector<int>dp(n,-1);
        return max(house(v1),house(v2));
        
    }
    
private:
     int f(int ind,vector<int>&nums,vector<int>&dp)
    {
        if(ind==0)
        {
          return nums[ind];
        }
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        
      int pick = nums[ind] + f(ind-2,nums,dp);
        int nonpick = 0 + f(ind-1,nums,dp);
        return dp[ind] = max(pick,nonpick);
    }

    int house(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
        
    }
};
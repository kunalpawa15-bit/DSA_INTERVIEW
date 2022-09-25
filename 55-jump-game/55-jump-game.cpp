class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
       return f(0,nums,dp);
    }
    bool f(int i,vector<int>&nums,vector<int>&dp)
    {
        int n = nums.size();
        if(i==n-1)return dp[i]=true;
        if(dp[i]!=-1)return dp[i];
        int maxi = i + nums[i];
        for(int ind = i+1;ind<=maxi;ind++)
        {
            if(f(ind,nums,dp))return true;
        }
        return dp[i]=0;
    }
        
};
/*
// DP 

bool solveDp(int n, vector<int> & nums) {
    vector<int> dp(n,0);
    dp[0] = 1;
    for(int idx=1; idx < n;idx++) {
        for(int i=idx-1; i>=0;i--) {
            int maxJump = i + nums[i];
            int requiredJump = idx;
            if(dp[i] && maxJump >= requiredJump) {
                dp[idx] = 1;
                break;
            }
        }
    }
    return dp[n-1];
}

// DP Optimised O(n)

bool solveDpOp(int n, vector<int> & nums) {
    int lastPos = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        int maxJump = i + nums[i];
        if (maxJump >= lastPos) {
            lastPos = i;
        }
    }
    return lastPos == 0;
}

bool canJump(vector<int>& nums) {
    int n = nums.size();
    return solveRecursion(0, nums);
    vector<int> ds(n, -1);
    int ans = solveMemoization(0, nums, ds);
    return ans == 1;
    return solveDp(n, nums);
    return solveDpOp(n, nums);
}
*/
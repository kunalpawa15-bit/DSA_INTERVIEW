class Solution {
public:
    int maxProfit(int k,vector<int>& nums) {
        int n = nums.size();
       vector<vector<int>>curr(2,vector<int>(k+1,0));
        vector<vector<int>>prev(2,vector<int>(k+1,0));
       /* for(int i=0;i<n;i++)
        {
            for(int buy=0;buy<=1;buy++)
            {
                dp[i][buy][0]= 0;
            }
        }
         for(int buy=0;i<=1;i++)
        {
            for(int cap=0;cap<=2;buy++)
            {
                dp[n][buy][cap]= 0;
            }
        }*/
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=k;cap++)
                {
                    if(buy)
                    {
                          curr[buy][cap] = max((-nums[i] + prev[0][cap]) , (0+prev[1][cap]));
                    }
                    else
                    {
                          curr[buy][cap] = max((nums[i] + prev[1][cap-1]) , (0,prev[0][cap]));
                    }
                }
            }
            prev = curr;
        }
        
         
        
        return prev[1][k] ;
        
        
    }

};
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<int>prev(2,0),curr(2,0);
        
       
        prev[0] = 0;
        prev[1] = 0;
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                int profit = 0;
                
                if(buy)
                {
                   profit = max((-nums[i] + prev[0]),(0 + prev[1]));
                }
                else
                {
                   profit = max((nums[i] + prev[1]),(0 + prev[0]));
                }
                     curr[buy] = profit;
            }
            prev = curr;
        }
          
         return prev[1];
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]-mini > profit)
            {
                profit = prices[i]-mini;
            }
            mini = min(prices[i],mini);
        }

        return profit;
    }
};
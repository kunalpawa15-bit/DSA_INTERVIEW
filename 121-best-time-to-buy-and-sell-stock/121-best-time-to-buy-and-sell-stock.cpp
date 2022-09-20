class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = INT_MIN;
        int mini = prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]-mini > maxi)maxi = prices[i]-mini;
            mini = min(mini,prices[i]);
        }
        
        return maxi;
    }
};
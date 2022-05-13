class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
       int minpro = INT_MAX;
       int maxpro = 0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minpro)
            {
                minpro = prices[i];
            }
            else if(prices[i]-minpro > maxpro)
            {
                maxpro = prices[i]-minpro;
            }
        }
        return maxpro;
        
    }
};
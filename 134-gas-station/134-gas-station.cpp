class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int totalgas = accumulate(gas.begin(),gas.end(),0);
        int totalcost = accumulate(cost.begin(),cost.end(),0);
        
        if(totalgas<totalcost)return -1;
        
        int total = 0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            total = total + gas[i] - cost[i];
            if(total<0)
            {
                total = 0;
                ans = i+1;
            }
        }
        return ans;
    }
};
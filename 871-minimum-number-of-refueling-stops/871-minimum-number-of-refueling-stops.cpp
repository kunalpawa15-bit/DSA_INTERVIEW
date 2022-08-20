class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        priority_queue<long>maxh;
        long long total = startFuel;
        int ans= 0;
        int i=0;
        
        while(i<stations.size())
        {
            if(total >= target)return ans;
            if(total<stations[i][0])
            {
                if(maxh.empty())return -1;
                total += maxh.top();
                ans++;
                maxh.pop();
                continue;
            }
            else
            {
                maxh.push(stations[i][1]);
               
            }
            i++;
 
        }
        
        while(total<target && !maxh.empty())
            {
                total = total + maxh.top();
                ans++;
                maxh.pop();
            }
        
        return total>=target?ans:-1;
        
    }
};



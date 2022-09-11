class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod = 1e9 + 7;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            v[i] = {efficiency[i],speed[i]};
        }
        sort(v.rbegin(),v.rend());
        long long sum = 0,ans = 0;
        priority_queue<int,vector<int>,greater<int>>minh;
        
        for(auto&[e,s]:v)
        {
            minh.push(s);
            sum = sum + s;
            
            if(minh.size()>k)
            {
                sum -= minh.top();
                minh.pop();
            }
            
            ans = max(ans,sum*e);
        }
        
        return ans%mod;
    }
};

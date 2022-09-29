class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n= nums.size();
        stack<int>s;
        vector<int>v(n,-1);
        vector<int>ans(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && nums[s.top()]<=nums[i])s.pop();
            if(s.empty())v[i] = -1;
            else v[i] = s.top();
            s.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==-1)ans[i] = 0;
            else ans[i] = v[i]-i;
        }
        
        return ans;
    }
};
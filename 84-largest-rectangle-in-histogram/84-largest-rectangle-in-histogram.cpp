class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        vector<int>l(n,-1);
        vector<int>r(n,-1);
        stack<int>s;
       for (int i(0); i < n; ++i) 
        {
            while (!s.empty() and heights[s.top()] >= heights[i]) {
                s.pop(); 
            }
            if (s.empty())
            {
                l[i] = -1; 
            }
            else 
            {   l[i] = s.top(); 
            }
               s.push(i);
        }
        
        while(!s.empty())s.pop();
        
       for (int i=n-1; i >= 0; --i) 
        {
            while (!s.empty() and heights[s.top()] >= heights[i]) 
            { 
                s.pop();
            }
            if (s.empty()) 
            {
                r[i] = n; 
            }
            else 
            { 
                r[i] = s.top(); 
            }
               s.push(i);
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,(r[i]-l[i]-1)*heights[i]);
        }
        
        return ans;
    }
};
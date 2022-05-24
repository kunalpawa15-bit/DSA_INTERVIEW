class Solution {
public:
    int trap(vector<int>& heights) {
        int n = heights.size();
        
        vector<int>v1(n);
        vector<int>v2(n);
        vector<int>ans(n);
        
        v1[0] = heights[0];
        v2[n-1] = heights[n-1];
        
        for(int i=1;i<n;i++){
            v1[i] = max(v1[i-1],heights[i]);
        }
        
        for(int i=n-2;i>=0;i--)
        {
            v2[i] =  max(v2[i+1],heights[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            ans[i] = min(v1[i],v2[i]) - heights[i];
        }
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum + ans[i];
        }
        
        return sum;
    }
};
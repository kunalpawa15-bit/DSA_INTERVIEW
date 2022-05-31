class Solution {
public:
    int maxDistance(vector<int>& a, vector<int>& b) {
        
        int i=0,j=0,ans=0;
        int n = a.size();
        int m= b.size();
        
        while(i<n && j<m)
        {
            if(a[i]>b[j])
                i++;
            else
                ans = max(ans,j++ -i);
        }
        
        return ans;
        
    }
};
class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            vector<int>v(m);
            for(int j=i;j<n;j++)
            {
                for(int x=0;x<m;x++)
                {
                    v[x] = v[x] + matrix[j][x];
                }
                
                int sum = f(v,k);
                maxi = max(maxi,sum);
            }
        }
        
        return maxi;
    }
    
    int f(vector<int>&v,int k)
    {
        int n = v.size();
        
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum = sum + v[j];
                if(sum<=k)
                {
                    maxi = max(maxi,sum);
                }
            }
        }
        
        return maxi;
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int n = a.size();
        int m = a[0].size();
        int cols = 1;
        
        for(int i=0;i<n;i++){
            if(a[i][0]==0)
            {
                cols=0;
            }
        }
       
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(a[i][j]==0)
                {
                    a[i][0]=a[0][j]=0;
                }
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(a[i][0]==0 || a[0][j]==0)
                {
                    a[i][j]=0;
                }
            }
            if(cols==0)
            {
                a[i][0]=0;
            }

        }

        
        
    }
};
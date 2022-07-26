class Solution {
public:
    int a[61][61][61];
    int integerBreak(int n) {
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            v.push_back(i);
        }
        
        memset(a,-1,sizeof(a));
        
        return f(0,n,0,v);
    }
    
    int f(int i,int n,int k,vector<int>&v)
    {
        if(n==0)
        {
            if(k>=2)return 1;
            else return 0;
        }
        if(i==v.size())return 0;
        if(a[i][n][k]!=-1)return a[i][n][k];
        
        int nottake = 1;
        int take= 1;
        if(v[i]<=n)
        {
            take = max(f(i,n-v[i],k+1,v)*v[i]  , f(i+1,n,k,v));
        }
        else
        {
            nottake = f(i+1,n,k,v);
        }
        
        return a[i][n][k] =  max(take,nottake);
    }
};




class Solution {
public:
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
       return f(n,v);
        
    }
    
private:
    int f(int n,vector<int>&v)
    {
         
        if(n==0)
            return 1;
        if(n==1)return 1;
        
        if(v[n]!=-1)return v[n];
        
        int l = f(n-1,v);
        int r = f(n-2,v);
        
        return v[n] = l+r;
    }
};
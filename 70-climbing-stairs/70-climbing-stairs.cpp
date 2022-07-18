class Solution {
public:
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
        return f(n,v);
        
        
    }
    int f(int ind,vector<int>&v)
    {
        
        if(ind==0 || ind==1)return 1;
        if(v[ind]!=-1)return v[ind];
        return v[ind] = f(ind-1,v) + f(ind-2,v);
    }
};
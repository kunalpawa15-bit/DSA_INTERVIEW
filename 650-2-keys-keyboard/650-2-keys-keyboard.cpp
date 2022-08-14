class Solution {
public:
    int minSteps(int n) {
        if(n==1)return 0;
        return 1 + f(1,1,n);
    }
    int f(int c,int v,int n)
    {
        if(c==n)return 0;
        if(c>n)return 1e9;
        
        return min(1+f(c+v,v,n),2+f(c+c,c,n));
    }
};

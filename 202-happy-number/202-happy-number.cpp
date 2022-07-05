class Solution {
public:
    
    int fun(int n)
    {
        int ans = 0;
        while(n>0)
        {
       int  r = n%10;
        n= n/10;
        ans  = ans + r*r;
       }
        return ans;
    }
    public:
    
        bool isHappy(int n) {
        
            int slow = n;
            int fast = fun(n);
            while(fast!=1 && slow!=fast)
            {
                slow = fun(slow);
                fast = fun(fun(fast));
            }
            return fast==1;
    }
    
};
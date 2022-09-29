class Solution {
public:
    int integerReplacement(int n) {
        return f(n,0,0,0);
    }
    int f(unsigned int n,int even,int odd1,int odd2)
    {
      if(n<=1)return 0;
      if(n%2==0)even =  1 + f(n/2,even,odd1,odd2);
        else
        {
            odd1 = (1 + f(n-1,even,odd1,odd2));
            odd2 = (1 + f(n+1,even,odd1,odd2));
        }
        int odd = min(odd1,odd2);
        return even + odd;
    }
};


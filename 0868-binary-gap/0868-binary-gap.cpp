class Solution {
public:
    int binaryGap(int n) {
        string s="";
        while(n>0)
        {
            int r = n%2;
            n = n/2;
            s.push_back('0' +r);
        }
        reverse(s.begin(),s.end());
    
    int maxi = 0 , l = 0;
   for(int i = 0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            l = i;
            break;
        }
    }
    int r = l+1;
    while(r<s.length())
    {
        if(s[r]=='1')
        {
            maxi = max(maxi , r-l);
            l = r;
        }
        r++;
    }
    return maxi;

    }
};
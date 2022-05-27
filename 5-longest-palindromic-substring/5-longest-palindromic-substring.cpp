class Solution {
public:
    string longestPalindrome(string s) {
        
        int n= s.length();
        if(n==0)
        {
            return "";
        }
        
        
        bool p[n][n];
        memset(p,0,sizeof(p));
        
        for(int i=0;i<n;i++)
        {
            p[i][i]=true;
        }
        
         string ans = "";
         ans = ans + s[0];
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j = i+1;j<n;j++)        
            {
                if(s[i]==s[j])
                {
                if(j-i == 1 || p[i+1][j-1])
                {
                    p[i][j] = true;
                
                
                if(ans.size()<j-i+1)
                {
                    ans = s.substr(i,j-i+1);
                }
                }
                }
            }
        }
        
        return ans;
        
    }
};


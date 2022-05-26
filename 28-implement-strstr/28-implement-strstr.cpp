class Solution {
public:
    int strStr(string s1, string s2) {
        
        int n = s1.size();
        int m  = s2.size();
        int i=0;
        int j=0;
        for(;i<n;i++)
        {
             if(j==m)
            {
                break;
            }
            if(s2[j]==s1[i])
            {
                j++;
            }
           
            else
            {
                if(j>0)
                {
                    i = i-j;
                }
                j=0;
            }
        }
        return j<m?-1:i-j;
        
    }
};
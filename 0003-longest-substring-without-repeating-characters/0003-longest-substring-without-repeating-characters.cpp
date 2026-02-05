class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int>m(256,-1);
        int l = 0 , maxi = 0;
        for(int i = 0;i<n;i++)
        {
            if(m[s[i]] != -1)
            {
                if(m[s[i]] >= l)
                {
                    l = m[s[i]]+1;
                }
            }
            maxi = max(maxi , i-l+1);
            m[s[i]] = i;
        }
        return maxi;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , maxi = 0;
        vector<int> m(256, -1);
        for(int i = 0;i<s.length();i++)
        {
            if(m[s[i]] != -1)
            {
                if(m[s[i]] >=l)
                l = 1+m[s[i]];
            }
            maxi = max(maxi , i-l+1);
            m[s[i]] = i;

        }
        return maxi;
    }
};
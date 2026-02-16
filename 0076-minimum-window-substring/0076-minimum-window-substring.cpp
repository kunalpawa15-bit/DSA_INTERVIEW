class Solution {
public:
    string minWindow(string s, string t) {
       int mini = INT_MAX, l = 0 , r = 0,count = 0,index = -1;
       map<char,int>m;
       for(int i = 0;i<t.length();i++)
       {
            m[t[i]]++;
       }
        while(r<s.length())
        {
            if(m[s[r]] > 0)count++;
            m[s[r]]--;
            while(count == t.length())
            {
                
                if(mini > r-l+1)
                {
                    mini =  r-l+1;
                    index = l;
                }
                m[s[l]]++;
                if(m[s[l]] > 0)count--;
                l++;
                
            }
            r++;
        }
        return index == -1 ? "" : s.substr(index,mini);

    }
};
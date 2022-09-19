class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s!=goal)
            {
                s = s+s[0];
                s.erase(0,1);
            }
            else return 1;
        }
        return 0;
    }
};
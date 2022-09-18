class Solution {
public:
    bool checkValidString(string s) {
        stack<int>s1;
        stack<int>s2;
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                s1.push(i);
            else if(s[i]=='*')
                s2.push(i);
            else
            {
                if(!s1.empty())
                    s1.pop();
                else if(!s2.empty())
                    s2.pop();
                else
                    return false;
            }
        }
        
        while(!s1.empty())
        {
            if(s2.empty())return false;
            else if(s1.top()<s2.top())
            {
                s1.pop();
                s2.pop();
            }
            else return false;
        }
        
        return true;
    }
};




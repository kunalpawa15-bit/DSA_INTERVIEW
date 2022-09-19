class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int n= s.length();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')continue;
            if(s[i]=='(')st.push(s[i]);
            if(s[i]==')')st.pop();
            else{
                int count=st.size();
                ans = max(count,ans);
            }
        }
        
        return ans;
    }
};
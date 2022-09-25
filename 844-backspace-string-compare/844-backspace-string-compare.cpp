class Solution {
public:
     bool backspaceCompare(string s, string t) {
        stack<char>st,s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' and !st.empty())
                st.pop();
        else if(s[i]!='#')
            st.push(s[i]);    
        }
            for(int i=0;i<t.size();i++){
            if(t[i]=='#' and !s1.empty())
                s1.pop();
        else if(t[i]!='#')
            s1.push(t[i]);
        }
        if(st.size()!=s1.size())
            return false;
        else{
            while(!s1.empty()){
                if(st.top()!=s1.top()){
               
                    return false;
                }
                st.pop(); s1.pop();
            }
        }
        
        return true;
    }
};
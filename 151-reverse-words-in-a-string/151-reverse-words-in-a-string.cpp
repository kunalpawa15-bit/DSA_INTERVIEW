class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        if(n==0)return s;
        string result;
        stack<string>st;
        for(int i=0;i<n;i++)
        {
            string word;
            if(s[i]== ' ')
                continue;
            while(i<s.size() && s[i]!=' ')
            {
                word += s[i];
                i++;
            }
            
            st.push(word);
        }
        
        while(!st.empty())
        {
            result = result + st.top();
            st.pop();
            if(!st.empty())result+=" ";
        }
        
        return result;
    }
};

// class Solution {
// public:
    
    
//     // maine kiya
//     string reverseWords(string st) {
//         int n = st.length();
//         stack<string>s;
//         string ans = "";
//         for(int i=0;i<n;i++)
//         {
//             ans += st[i];
//             if(st[i]==' ' || i==n-1)
//             {
//                 s.push(ans);
//                 ans = "";
//             }
//         }
//         s.push(ans);
        
//         string res = "";
//         while(!s.empty())
//         {
//             res += s.top();
//             s.pop();
//         }
        
//         return res;
//     }
// };
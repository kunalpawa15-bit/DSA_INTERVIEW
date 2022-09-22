class Solution {
public:
    string reverseWords(string st) {
         reverse(st.begin(),st.end());
        string temp = "";
        temp= st;
        stack<string>s;
        for(int i=0;i<temp.length();i++)
        {
            string word = "";
            if(temp[i]==' ')continue;
            while(i<temp.length() && temp[i]!=' ')
            {
                word += temp[i];
                i++;
            }
            s.push(word);
        }
        
        string res ="";
           
        while(!s.empty())
        {
            res = res + s.top();
            s.pop();
            if(!s.empty())res += " ";
        }
        
        return res;
    }
};
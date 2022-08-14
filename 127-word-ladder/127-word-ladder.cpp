class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) {
        
        queue<pair<string,int>>q;
        q.push({begin,1});
        while(!q.empty())
        {
            string w = q.front().first;
            int count = q.front().second;
            q.pop();
            
            if(w==end)
                return count;
            for(int i=0;i<word.size();i++)
            {
                int c=0;
                for(int j=0;j<word[i].length();j++)
                {
                    if(w[j]!=word[i][j])
                        c++;
                }
                
                if(c==1)
                {
                    q.push({word[i],count+1});
                
                word.erase(word.begin()+i);
                i--;
                }
            }
        }
        
        return 0;
    }
};


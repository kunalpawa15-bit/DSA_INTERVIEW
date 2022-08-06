class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
     
        
        priority_queue<pair<int,int>>p1;
        priority_queue<pair<int,int>>p2;
        
        for(int i=0;i<items1.size();i++)
        {
            p1.push({items1[i][0],items1[i][1]});
        }
         for(int i=0;i<items2.size();i++)
        {
            p2.push({items2[i][0],items2[i][1]});
        }
        vector<int>v;
        vector<vector<int>>ans;
        while(p1.size()>0 && p2.size()>0)
        {
            while(!v.empty())v.pop_back();
            if(p1.top().first==p2.top().first)
            {
                v.push_back(p1.top().first);
                v.push_back(p1.top().second + p2.top().second);
                ans.push_back(v);
                p1.pop();
                p2.pop(); 
                v.pop_back();
                v.pop_back();
            }
            
            else
            {
                if(p1.top().first>p2.top().first)
                {
                    v.push_back(p1.top().first);
                    v.push_back(p1.top().second);
                    ans.push_back(v);
                    p1.pop();
                    v.pop_back();
                    v.pop_back();
                }
                else
                {
                    v.push_back(p2.top().first);
                    v.push_back(p2.top().second);
                    ans.push_back(v);
                    p2.pop();
                    v.pop_back();
                    v.pop_back();
                }
            }
        }
        while(p1.size()>0)
        {
             v.push_back(p1.top().first);
             v.push_back(p1.top().second);
             ans.push_back(v);
             p1.pop();
            v.pop_back();
            v.pop_back();
        }
        while(p2.size()>0)
        {
             v.push_back(p2.top().first);
             v.push_back(p2.top().second);
             ans.push_back(v);
             p2.pop();
             v.pop_back();
             v.pop_back();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        map<int,int>m;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>>maxh;
        for(auto it:m)
        {
            maxh.push({it.second,it.first});
        }
        
        string ans = "";
        while(!maxh.empty())
        {
             int count = maxh.top().first;
            char c = maxh.top().second;
            maxh.pop();

            while (count--)
            {
                ans += c;
            }
        }
        
        return ans;
    }
};
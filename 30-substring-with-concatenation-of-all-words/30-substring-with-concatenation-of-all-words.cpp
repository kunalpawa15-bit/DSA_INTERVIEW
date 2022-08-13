class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = words[0].size();
        int m = words.size();
        int total = n*m;
        int l = s.length();
        if(total>l)return {};
        
        unordered_map<string,int>map1,map2;
        for(auto it:words)
        {
            map1[it]++;
        }
        map2=map1;
        vector<int>ans;
        int i=0,x=-1,count=0;
        while(i<l)
        {
            string t = s.substr(i,n);
            if(map1[t])
            {
                map1[t] = map1[t] - 1;
                if(x==-1)
                {
                    x = i;
                }
                count = count+1;
                i = i + n;
            }
            else
            {
                if(x!=-1)
                {
                    if(count==m)
                    {
                        ans.push_back(x);
                    }
                    i = x;
                    count=0;
                    x = -1;
                    map1 = map2;
                }
                i = i+1;
            }
        }
        
        if(count==m)
        {
            ans.push_back(x);
        }
        
    return ans;
        
        
    }
};


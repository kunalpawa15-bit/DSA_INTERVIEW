class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        map<char,int>m;
        map<char,int>mp;
        
        for(auto a:s)
            m[a]++;
        for(auto a:target)
            mp[a]++;
        int mini = INT_MAX;
        for(auto a:mp)
            mini = min(mini,m[a.first]/a.second);
        return mini;
        
    }
};

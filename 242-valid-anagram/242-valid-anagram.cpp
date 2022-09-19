class Solution {
public:
    bool isAnagram(string s1, string s2) {
        
        int n = s1.length();
        int k = s2.length();
        
        if(n!=k)
            return false;
        map<char,int>m;
        for(auto x:s1)
            m[x]++;
        for(auto j:s2)
            if(--m[j]<0)
                return false;
        return true;
        
    }
};
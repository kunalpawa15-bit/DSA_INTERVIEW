class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       map<char,int>m;
        int size = tasks.size();
       int count=0;
       for(int i=0;i<tasks.size();i++)
       {
           m[tasks[i]]++;
           count = max(count,m[tasks[i]]);
       }
        
        int freq = 0;
        for(auto it:m)
        {
            if(it.second==count)freq++;
        }
        
        return max(size,((n+1)*(count-1)+freq));
    }
};
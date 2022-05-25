class Solution {
public:
    int maximumBags(vector<int>& a, vector<int>& b, int add) {
        
        int n = a.size();
        int count=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]= a[i]-b[i];
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size() && v[i]-add<=0;i++)
        {
            count++;
            add = add - v[i];
        }
        
        return count;
    }
};
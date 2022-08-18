class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        vector<int>v;
        int n = arr.size();
        int size = n/2;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int count=0;
        int maxi = INT_MAX;
        
        for(int i=v.size()-1;i>=0;i--)
        {
            maxi = n-v[i];
            count++;
            if(maxi<=size)
            {
                return count;
            }
            else
            {
                v.pop_back();
                n = maxi;
                maxi=0;
            }
        }
        return count;
    }
};
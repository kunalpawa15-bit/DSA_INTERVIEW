class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v1;
        vector<vector<int>>v;
        f(v,v1,candidates,target,0);
        return v;
    }
    void f(vector<vector<int>>&v,vector<int>&v1,vector<int>&a,int target,int i)
    {
        int n = a.size();
        if(i==n)
        {
            if(target==0)
            {
                v.push_back(v1);
            }
            return;
        }
        if(a[i]<=target)
        {
            v1.push_back(a[i]);
            f(v,v1,a,target-a[i],i);
            v1.pop_back();
        }
        f(v,v1,a,target,i+1);
        
    }
};
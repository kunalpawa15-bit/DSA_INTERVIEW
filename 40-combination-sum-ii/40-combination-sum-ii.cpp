class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>v1;
        sort(candidates.begin(),candidates.end());
        f(v,v1,candidates,target,0);
        return v;
    }
    void f(vector<vector<int>>&v,vector<int>&v1,vector<int>&a,int target,int ind)
    {
        int n = a.size();

        if(target==0)
            {
                v.push_back(v1);
                return;
            }
            
        
        for(int i=ind;i<n;i++)
        {
            if(i>ind && a[i]==a[i-1])continue;
        
        if(a[i]>target)break;
        
            v1.push_back(a[i]);
            target= target-a[i];
            f(v,v1,a,target,i+1);
            target = target+a[i];
            v1.pop_back();
        
        }
        
        
    }
};
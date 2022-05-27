class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        map<int,int>m;
        int ans=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second!=2)
            {
                ans = x.first;
            }
        }
        
        return ans;
        
    }
};
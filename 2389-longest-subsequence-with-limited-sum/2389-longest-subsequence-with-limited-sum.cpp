class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m = queries.size();
        vector<int>v;
        vector<int>ans(m,0);
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
            v.push_back(sum);
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[j]<=queries[i]) ans[i] = j+1;
                else break;
            }
        }
        
        return ans;
    }
};
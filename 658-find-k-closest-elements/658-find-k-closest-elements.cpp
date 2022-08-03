class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
      
        int n  = nums.size();
        vector<int>v;
        priority_queue<pair<int,int>>maxh;
        for(int i=0;i<n;i++)
        {
            maxh.push({abs(x-nums[i]),nums[i]});
            
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        
        while(maxh.size()!=0)
        {
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(v.begin(),v.end());
        
    return v;
    }
};
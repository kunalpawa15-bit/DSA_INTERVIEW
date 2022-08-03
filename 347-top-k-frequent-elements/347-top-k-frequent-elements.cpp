class Solution {
public:
    #define pi pair<int,int>
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>>minh;
        for(auto it:m)
        {
            
            minh.push({it.second,it.first});
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        
        vector<int>v;
        while(minh.size()!=0)
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        
        return v;
    }
};
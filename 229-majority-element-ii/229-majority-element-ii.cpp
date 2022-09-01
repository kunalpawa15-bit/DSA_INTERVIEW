class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        
        for(auto it:m)
        {
            if(it.second>n/3)
                v.push_back(it.first);
        }
        
        return v;
    }
};
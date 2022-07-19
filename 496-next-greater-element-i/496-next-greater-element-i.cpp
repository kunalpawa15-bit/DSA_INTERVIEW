class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>v1;
        int n = nums2.size();
        vector<int>ans(n,-1);
        stack<int>s;

        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    v.push_back(j);
                }
            }
        }
        
        s.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums2[i])
            {
                s.pop();
            }
            if(!s.empty() && s.top()>nums2[i])
                ans[i] = s.top();
            s.push(nums2[i]);
        }
        
        for(int i=0;i<v.size();i++)
        {
            v1.push_back(ans[v[i]]);
        }
        return v1;
    }
};
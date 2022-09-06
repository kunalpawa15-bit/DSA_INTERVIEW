class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>s;
        
        vector<int>v(n);
        for(int i=n-1;i>=0;i--)
        {
            s.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i])
            {
                s.pop();
            }
            if(s.empty()==true)v[i] = -1;
            else v[i] = s.top();
            s.push(nums[i]);
        }
        
        return v;
    }
};
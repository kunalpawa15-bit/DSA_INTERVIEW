class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            s.push(nums[i]);
        }
        
        vector<int>v(n);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i])
                s.pop();
            if(s.empty())v[i]=-1;
            else v[i] = s.top();
            s.push(nums[i]);
        }
        return v;
    }
};
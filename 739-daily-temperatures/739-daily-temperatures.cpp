class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        stack<int> s;
        vector<int> ans (n);
        
        for(int i=n-1;i>=0;i--){
            
            while(!s.empty() && T[i] >= T[s.top()]) s.pop();
            ans[i] = s.empty() ? 0 : s.top()-i;
            s.push(i);
        }

        return ans;
    }
};
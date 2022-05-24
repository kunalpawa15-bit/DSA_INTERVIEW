
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> nsl(n);
        for (int i(0); i < n; ++i) 
        {
            while (!st.empty() and heights[st.top()] >= heights[i]) {
                st.pop(); 
            }
            if (st.empty())
            {
                nsl[i] = -1; 
            }
            else 
            {   nsl[i] = st.top(); 
            }
               st.push(i);
        }
        while (!st.empty()) st.pop();
        vector<int> nsr(n);
        for (int i=n-1; i >= 0; --i) 
        {
            while (!st.empty() and heights[st.top()] >= heights[i]) 
            { 
                st.pop();
            }
            if (st.empty()) 
            {
                nsr[i] = n; 
            }
            else 
            { 
                nsr[i] = st.top(); 
            }
               st.push(i);
        }
        int area = 0;
        for (int i=0;i<n;i++) 
            area=max(area, heights[i]*(nsr[i]-nsl[i]-1));
        return area;
    }
};
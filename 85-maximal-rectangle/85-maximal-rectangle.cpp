class Solution {
public:
    int MAH(vector<int>& heights) {
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
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        if(matrix.size()==0)return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int>v(m);
        for(int j=0;j<m;j++)
        {
            if(matrix[0][j]=='1')
                v[j]=1;
        }
        int maxi = -1;
        for(int i=1;i<n;i++)
        {
            maxi = max(maxi,MAH(v));
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0')
                    v[j]=0;
                else
                    v[j] = v[j]+1;
            }
        }
        
        maxi = max(maxi,MAH(v));
        return maxi;
    }
};
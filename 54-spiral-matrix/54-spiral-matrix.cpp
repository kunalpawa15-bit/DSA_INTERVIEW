class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int top = 0;
        int bottom = n-1;
        int right = m-1;
        int left = 0;
        
        vector<int>v;
        
        while(true)
        {
            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);
            }
            
            if(++top > bottom)
                return v;
            
            for(int i=top ; i<=bottom ;i++)
            {
                v.push_back(matrix[i][right]);
            }
            
            if(--right < left)
                return v;
            
            for(int i = right;i>=left;i--)
            {
                v.push_back(matrix[bottom][i]);
            }
            
            if(--bottom < top)
                return v;
            
            
            for(int i = bottom ; i>=top;i--)
            {
                v.push_back(matrix[i][left]);
            }
            if(++left > right)
                return v;
        }
        
    }
};
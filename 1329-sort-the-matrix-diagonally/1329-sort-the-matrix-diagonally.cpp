class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int count=0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i>0&&j>0)
                {
                    if(mat[i][j]<mat[i-1][j-1])
                    {
                        swap(mat[i][j],mat[i-1][j-1]);
                        count++;
                    }
                }
            }
        }
        if(count==0)
            return mat;
        return diagonalSort(mat);
    }
};
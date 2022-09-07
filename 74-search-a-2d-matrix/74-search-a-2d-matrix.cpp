class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int l=0;
        int h = n*m-1;
        
        
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(target == matrix[mid/m][mid%m])
                return true;
            else if(target>matrix[mid/m][mid%m])
                l = mid+1;
            else
                h = mid-1;
            
        }
        
        return false;
    }
};
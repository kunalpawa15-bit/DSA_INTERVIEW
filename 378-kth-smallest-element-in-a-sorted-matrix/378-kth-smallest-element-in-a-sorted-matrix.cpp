class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int n = matrix.size();
        int l = matrix[0][0];
        int h = matrix[n-1][n-1];
        int mid,temp,count;
        
        while(l<h)
        {
            mid = l+(h-l)/2;
            count=0;
            temp = n-1;
            
            for(int i=0;i<n;i++)
            {
                while(temp>=0 && matrix[i][temp] > mid)
                {
                    temp--;
                }
                count = count+temp+1;
            }
            
            if(count<k)
            {
                l=mid+1;
            }
            else
            {
                h=mid;
            }
        }
        return l;
        
    }
};

/*int n = matrix.size();
        int l=0;
        int x=0;
        int h = n*n-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(mid==k-1)
            {
                x = mid;
            }
            if(mid>k)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        
        return matrix[x/n][x%n];*/
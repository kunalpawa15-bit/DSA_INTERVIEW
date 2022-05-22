class Solution {
public:
    int maxArea(vector<int>& a) {
        
        int maxi = 0;
        int mini ;
        int i=0;
        int j = a.size()-1;
        while(i<j)
        {
            mini = min(a[i],a[j])*(j-i);
            maxi = max(mini,maxi);
            if(a[i]<a[j])i++;
            else
            {
                j--;
            }
        }
        
        return maxi;
    }
};
    
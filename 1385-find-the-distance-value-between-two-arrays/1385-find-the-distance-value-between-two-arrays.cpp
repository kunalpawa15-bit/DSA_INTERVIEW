class Solution {
public:
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {
        int n = a1.size();
        int m = a2.size();
        
        int res= n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(abs(a1[i]-a2[j])<=d)
                {
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};
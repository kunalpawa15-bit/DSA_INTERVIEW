class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(),pairs.end());
        auto curr = pairs[0];
        int chain = 1;
        
        for(int i=1;i<n;i++)
        {
            if(curr[1]<pairs[i][0])
            {
                chain++;
                curr = pairs[i];
            }
            else if(curr[1]>pairs[i][1])
                curr = pairs[i];
        }
        
        return chain;
    }
};
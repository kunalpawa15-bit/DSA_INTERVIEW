#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       

    int n=nums.size();
    vector<vector<int>> dp(n+1, vector(n+1, 0));
        
    for(int i=n-1; i>=0; i--)
    {
        for(int j=i-1; j>=-1; j--)
        {   
            int maxLength = dp[i+1][j+1];

            if(j == -1 || nums[i] > nums[j])
            {
                maxLength = max(maxLength, 1+dp[i+1][i+1]);
            }
        
            dp[i][j+1] = maxLength;
        }
    }
        
    return dp[0][0];
       }
    
   
};

    
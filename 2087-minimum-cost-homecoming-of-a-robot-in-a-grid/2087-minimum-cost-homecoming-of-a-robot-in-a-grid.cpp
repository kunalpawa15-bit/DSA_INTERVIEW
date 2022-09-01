

class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts)
	{
	
	
	    int res=0;
        for(int i=startPos[0]+1;i<=homePos[0];i++)
        {
            res+=rowCosts[i];
        }
		
        for(int i=startPos[1]+1;i<=homePos[1];i++)
        {
            res+=colCosts[i];
        }
        for(int i=startPos[0]-1;i>=homePos[0];i--)
        {
            res+=rowCosts[i];
        }
		
        for(int i=startPos[1]-1;i>=homePos[1];i--)
        {
            res+=colCosts[i];
        }
        
        return res;
    }};
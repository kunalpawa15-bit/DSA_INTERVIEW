class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        vector<vector<int>> ans;
        int n = heights.size();
        int m = heights[0].size();
        
        vector<vector<int>> pacific(n, vector<int> (m, -1));  
        
        vector<vector<int>> atlantic(n, vector<int> (m, -1)); 
 
        for(int j=0; j<m; j++){
            dfs(heights, 0, j, pacific, INT_MIN);                
            dfs(heights, n-1, j, atlantic, INT_MIN);     
           
        }
        for(int i=0; i<n; i++){
            dfs(heights, i, 0, pacific, INT_MIN);  
            dfs(heights, i, m-1, atlantic, INT_MIN);     

        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(pacific[i][j] == 1 && atlantic[i][j] == 1){
                    vector<int> v(2);
                    v[0] = i;
                    v[1] = j;
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<int>>& heights, int i, int j, vector<vector<int>>& visited, int prev){
       
        if(i<0 || i>=heights.size() || j<0 || j>=heights[0].size() || visited[i][j] == 1 || heights[i][j] < prev){
            return;
        }
        
    
        visited[i][j] = 1;


        dfs(heights, i+1, j, visited, heights[i][j]); 
        dfs(heights, i-1, j, visited, heights[i][j]);
        dfs(heights, i, j+1, visited, heights[i][j]); 
        dfs(heights, i, j-1, visited, heights[i][j]); 
    
    }
};

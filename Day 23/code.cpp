class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>tempGrid = grid;
        
        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j++){
                tempGrid[j][i] = grid[i][j]; 
            }
        }
        int cnt = 0 ;
        for(int i = 0 ; i < n; i ++){
            for(int j = 0 ; j < m ; j++ )
            if(grid[i] == tempGrid[j]){
                cnt++;
            }
        }
        return cnt;
    }
};

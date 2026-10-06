class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int block=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0 ; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    block+=4;
                }
                if(i+1 <grid.size() && (grid[i][j]==1 && grid[i+1][j]==1)){
                    block-=2;
                }
                if( j+1 <grid[0].size() && (grid[i][j]==1 && grid[i][j+1]==1)){
                    block-=2;
                }
            }
        }
    return block;
    }
};
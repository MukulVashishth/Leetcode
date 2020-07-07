class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per = 0;
        int rows = grid.size(), cols = grid[0].size();
        for(int i=0 ; i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==0)
                    continue;
                per+=4;
                if(i>0)
                    per-=grid[i-1][j];
                if(j>0)
                    per-=grid[i][j-1];
                if(i<rows-1)
                    per-=grid[i+1][j];
                if(j<cols-1)
                    per-=grid[i][j+1];
            }
        }
        return per;
    }
};
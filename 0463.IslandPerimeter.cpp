class Solution {
public:
    bool ingraph(int x, int y, int tx, int ty)
    {
        if(x<0||x>=tx||y<0||y>=ty) return false;
        else return true;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int step[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        int result = 0;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid[i].size();++j)
            {              
                if(grid[i][j])
                {
                    for(int k=0;k<4;++k) 
                        if((ingraph(i+step[k][0],j+step[k][1],grid.size(),grid[i].size())&&grid[i+step[k][0]][j+step[k][1]]!=1)) ++result;
                        else if(!ingraph(i+step[k][0],j+step[k][1],grid.size(),grid[i].size()))++result;
                }
            }
        }
        
        return result;
    }
};
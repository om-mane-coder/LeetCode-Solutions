class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int time = 0;

        while(true)
        {
            vector<vector<int>> temp = grid;
            bool changed = false;

            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(grid[i][j] == 1)
                    {
                        if((i > 0 && grid[i-1][j] == 2)||
                        (i < m-1 && grid[i+1][j] == 2)||
                        (j > 0 && grid[i][j-1] == 2)||
                        (j < n-1 && grid[i][j+1]== 2))
                        {

                        temp[i][j] = 2;
                        changed = true;
                        }
                    }
                }
            }
        

        if(!changed)
        {
            break;
        }

        grid = temp;
        time++;
        }

        
    

    for(auto &row : grid)
      for(int x : row)
      if(x == 1)
        return -1;

   return time;
}
};
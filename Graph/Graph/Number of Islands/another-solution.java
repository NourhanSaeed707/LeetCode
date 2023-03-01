class Solution {
    public void clearGrid(char[][] grid, int i, int j){
       if(i < 0 || j < 0 || i >= grid.length || j >= grid[0].length || grid[i][j] == '2' || grid[i][j] == '0')
         return;
        grid[i][j] = '2';
        clearGrid(grid, i + 1, j);
        clearGrid(grid, i, j + 1 );
        clearGrid(grid, i - 1, j);
        clearGrid(grid, i, j -1);
        return;
    }
    public int numIslands(char[][] grid) {
        int res = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[0].length; j++){
                if(grid[i][j] == '1') {
                    res++;
                    clearGrid(grid, i, j);
                }
            }
        }
        return res;
    }
}

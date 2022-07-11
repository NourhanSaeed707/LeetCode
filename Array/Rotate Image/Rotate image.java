class Solution {
    public void rotate(int[][] matrix) {
        int colms = matrix[0].length;
        int i = 0, j = 0;
        int [][] rotate = new int [colms][colms];
        for(int col = 0; col < colms; col++){
            for(int r = matrix.length - 1; r >= 0; r--){
                rotate[i][j] = matrix[r][col];
                j++;
            }
            i++;
            j = 0;
        }
         for(int col = 0; col < colms; col++){
            for(int r = 0; r < colms; r++){
                matrix[col][r] = rotate[col][r];
            }
         }
        
    }
}

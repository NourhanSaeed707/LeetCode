
class Solution {
    public void helper(int[][] image, int i, int j, int oldColor ,int newColor,int r, int c) {
    // i -> for row , j -> for column
       if(i < 0 || j < 0 || i == r || j == c || image[i][j] != oldColor) return;
      //replace oldColor to newColor
      image[i][j] = newColor;
      //Down
      helper(image, i + 1 , j, oldColor, newColor, r, c);
      //Up
      helper(image, i - 1, j, oldColor, newColor, r, c);
      //Left
      helper(image, i, j - 1, oldColor, newColor, r, c);
      //Right 
      helper(image, i, j + 1, oldColor, newColor , r, c);

    }
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int r,c, oldColor;
        oldColor = image[sr][sc];
      // if oldColor == color we don't need to recursive over array.
        if(oldColor == color) return image;
        r = image.length;
        c = image[0].length;
        helper(image, sr, sc, oldColor, color, r, c);
        return image;
    }
}

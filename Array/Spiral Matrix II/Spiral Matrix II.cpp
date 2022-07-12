class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int>v;
        vector < vector<int>> spiral;
        int val = 1, right = 0, left = 0 , down = 0 ,up = 0, row = 0, col = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v.push_back(0);
            }
            spiral.push_back(v);
            v.clear();
        }
        while (true) {
            if (right == 0) {
                //increase column
                int i = col;
                while (i < n && spiral[row][i] == 0) {
                    spiral[row][i] = val;
                    val++;
                    col = i;
                    right++;
                    i++;
                }
            }
            if (down == 0) {
                //increase row
                int i = row + 1;
                while (i < n && row + 1 < n && spiral[row+1][i] == 0) {
                    spiral[i][col] = val;
                    val++;
                    row = i;
                    down++;
                    i++;
                }
            }
            if (left == 0) {
                //decrease column
                int i = col - 1;
                while (i >= 0 && spiral[row][i] == 0) {
                    spiral[row][i] = val;
                    val++;
                    col = i;
                    left++;
                    i--;
                }
            }
            if (up == 0) {
                //decrease row
                int i = row - 1;
                while (i >= 0 && spiral[i][col] == 0) {
                    spiral[i][col] = val;
                    val++;
                    row = i;
                    up++;
                    i--;
                }
            }
            col++;
            if (right == 0 && left == 0 && up == 0 && down == 0) break;
            else if (right > 0 || left > 0 || up > 0 || down > 0) {
                right = 0, left = 0, up = 0, down = 0;
            }
        }
        return spiral;
    }
};

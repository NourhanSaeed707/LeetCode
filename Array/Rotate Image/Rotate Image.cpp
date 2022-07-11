class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> v;
        vector< vector<int>> rotate;
        int colms = matrix[0].size();
        for(int col = 0; col < colms; col++){
            for(int r = matrix.size() - 1; r >= 0; r--){
                v.push_back(matrix[r][col]);
            }
            rotate.push_back(v);
            v.clear();
        }
        matrix = rotate;
    }
};

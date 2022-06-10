
class Solution {    
public:
bool checkBox(vector<vector<char>>& board,int startRow,int endRow  , int startCol, int endCol){
        vector<int> hashtable(11);
        int ind;
        for(int i = startRow; i < endRow; i++ ){
            for(int j = startCol; j < endCol; j++){
                if(board[i][j] != '.'){
                 ind = (int)board[i][j] - 48;
                 hashtable[ind]++;
                 if(hashtable[ind] > 1) return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board){
        //checkBox
        for(int i = 0; i < board.size(); i+=3){
            for(int j = 0; j < board[i].size(); j+=3){
                if(checkBox(board, i , i+3 , j, j+3) == false)
                    return false;
            }
        }
        //check row
        for(int i = 0; i < board.size(); i++){
            vector<int> hashtable(10);
            int ind;
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] != '.'){
                  ind = (int)board[i][j] - 48;
                  hashtable[ind]++;
                  if(hashtable[ind] > 1) return false;
                }
            }
            hashtable.clear();
        }
        //check col
        int row = 0, col = 0,ind;
        while( col < 9){
            vector<int> hashtable(10);
            row = 0;
           while(row < 9){
               if(board[row][col] != '.'){
                  ind = (int)board[row][col] - 48;
                  hashtable[ind]++;
                  if(hashtable[ind] > 1) return false;
               }
               row++;
           }
            col++;
            hashtable.clear();
        }
        
        return true;
    }
};

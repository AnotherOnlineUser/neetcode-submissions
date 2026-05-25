class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int x=0; x<9; x++){
            unordered_set<char> s;
            for(int y=0; y<9; y++){
                char val = board[x][y];
                if (val == '.') continue;
                if(s.count(val)) return false;
                s.insert(val);
            }
        }
        for(int x=0; x<9; x++){
            unordered_set<char> s;
            for(int y=0; y<9; y++){
                char val = board[y][x];
                if (val == '.') continue;
                if(s.count(val)) return false;
                s.insert(val);
            }
        }

        for(int row = 0 ; row < 9; row+=3){
            for( int col = 0; col<9; col+=3){
                unordered_set<char> s;

                for(int i=row; i< row+3; i++){
                    for(int j=col ; j<col+3 ; j++){
                        char val = board[i][j];
                        if(val == '.') continue;
                        if(s.count(val)) return false;
                        s.insert(val);
                    }
                }
            }
        }

        return true;
    }
};

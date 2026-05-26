class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<string, unordered_set<char>> boxes;

        for(int r = 0; r < 9; r++) {

            for(int c = 0; c < 9; c++) {

                char val = board[r][c];

                if(val == '.')
                    continue;

                string boxKey = to_string(r / 3) + "," + to_string(c / 3);

                if(rows[r].count(val) ||
                   cols[c].count(val) ||
                   boxes[boxKey].count(val))
                {
                    return false;
                }

                rows[r].insert(val);
                cols[c].insert(val);
                boxes[boxKey].insert(val);
            }
        }

        return true;
        
        // for(int x=0; x<9; x++){
        //     unordered_set<char> s;
        //     for(int y=0; y<9; y++){
        //         char val = board[x][y];
        //         if (val == '.') continue;
        //         if(s.count(val)) return false;
        //         s.insert(val);
        //     }
        // }
        // for(int x=0; x<9; x++){
        //     unordered_set<char> s;
        //     for(int y=0; y<9; y++){
        //         char val = board[y][x];
        //         if (val == '.') continue;
        //         if(s.count(val)) return false;
        //         s.insert(val);
        //     }
        // }

        // for(int row = 0 ; row < 9; row+=3){
        //     for( int col = 0; col<9; col+=3){
        //         unordered_set<char> s;

        //         for(int i=row; i< row+3; i++){
        //             for(int j=col ; j<col+3 ; j++){
        //                 char val = board[i][j];
        //                 if(val == '.') continue;
        //                 if(s.count(val)) return false;
        //                 s.insert(val);
        //             }
        //         }
        //     }
        // }

        // return true;
    }
};

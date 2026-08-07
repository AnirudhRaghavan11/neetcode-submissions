class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // 1. Check all 9 Rows (9 passes)
        for (int r = 0; r < 9; r++) {
            bool seen[9] = {false};
            for (int c = 0; c < 9; c++) {
                if (board[r][c] != '.') {
                    // Convert char '1'-'9' to int index 0-8
                    int val = board[r][c] - '1'; 
                    if (seen[val]) return false;
                    seen[val] = true;
                }
            }
        }
        
        // 2. Check all 9 Columns (9 passes)
        for (int c = 0; c < 9; c++) {
            bool seen[9] = {false};
            for (int r = 0; r < 9; r++) {
                if (board[r][c] != '.') {
                    int val = board[r][c] - '1';
                    if (seen[val]) return false;
                    seen[val] = true;
                }
            }
        }
        
        // 3. Check all 9 Sub-boxes (9 passes)
        for (int box = 0; box < 9; box++) {
            bool seen[9] = {false};
            
            // Calculate the top-left starting coordinate for each 3x3 box
            int startRow = (box / 3) * 3;
            int startCol = (box % 3) * 3;
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char cell = board[startRow + i][startCol + j];
                    if (cell != '.') {
                        int val = cell - '1';
                        if (seen[val]) return false;
                        seen[val] = true;
                    }
                }
            }
        }
        
        return true;
    }
};
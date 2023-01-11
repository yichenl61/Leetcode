class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool area[9][9] = {false};

        for(int i = 0; i < 9; ++i)
        {
            for(int j = 0; j < 9; ++j)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                
                int num = board[i][j] - '0' - 1;
                int box = (i / 3) * 3 + (j / 3);
                
                if(row[i][num] || col[j][num] || area[box][num])
                {
                    return false;
                }
                
                row[i][num] = true;
                col[j][num] = true;
                area[box][num] = true;
            }
        }
        return true;
    }
};
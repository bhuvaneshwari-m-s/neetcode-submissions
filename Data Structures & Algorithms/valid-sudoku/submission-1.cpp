class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int,int>, unordered_set<char>> sq;

        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[i][j] == '.')
                    continue;
                pair<int,int> curr= {i/ 3, j / 3};

                if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) 
                || sq[curr].count(board[i][j]))
                    return false;
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                sq[curr].insert(board[i][j]);
            }
        }

        return true;
    }
};

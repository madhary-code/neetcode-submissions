class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for(int j = 0; j < 9;j++)
        {
            
            if(!isValidRow(j,0,board))
            {
                return false;
            }
        }
        cout << "row" << endl;

        for(int i = 0; i < 9;i++)
        {
            if(!isValidColumn(0,i,board))
            {
                return false;
            }
        }

        for(int i = 0; i < 9; i += 3)
        {
            for(int j = 0; j < 9; j += 3)
            {
                if(!isValidSquare(i,j,board))
                {
                    return false;
                }
                
            }
        }

        return true;
    }

    bool isValidSquare(int x, int y, vector<vector<char>>& board)
    {
        vector<bool> exist(10, false);
        for(int i = x; i < x + 3;i++)
        {
            for(int j = y; j < y + 3;j++)
            {
                if(board[i][j] != '.')
                {
                    int val = board[i][j] - '0';
                    if(exist[val])
                    {
                        return false;
                    }
                    exist[val] = true;
                }
            }
        }

        return true;
    }

    bool isValidRow(int x, int y, vector<vector<char>>& board)
    {
        vector<bool> exist(10, false);
        for(int j = 0; j < 9; j++)
        {
                if(board[x][j] != '.')
                {
                    int val = board[x][j] - '0';
                    if(exist[val])
                    {
                        return false;
                    }
                    exist[val] = true;
                }
            }
            return true;
        }
    bool isValidColumn(int x, int y, vector<vector<char>>& board)
    {

        vector<bool> exist(10, false);
        for(int i = x; i < x + 9; i++)
        {
                if(board[i][y] != '.')
                {
                    int val = board[i][y] - '0';
                    if(exist[val])
                    {
                        return false;
                    }
                    exist[val] = true;
                }
            }
            return true;
        }

};

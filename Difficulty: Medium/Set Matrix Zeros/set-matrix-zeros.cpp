class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
    vector <int> zeroCols, zeroRows;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                zeroCols.emplace_back(j);
                zeroRows.emplace_back(i);
            }
        }
    }
    
    for (int row : zeroRows)
    {
        for (int i = 0; i < n; i++)
        {
            mat[row][i] = 0;
        }
        
    }
    

    for (int col : zeroCols)
    {
        for (int i = 0; i < m; i++)
        {
            mat[i][col] = 0;            
        }
        
    }
    }
};
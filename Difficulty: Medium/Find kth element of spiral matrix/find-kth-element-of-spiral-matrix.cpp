class Solution {
  public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX], int n, int m, int k) {
        int top = 0, left = 0, right = m - 1, bottom = n - 1;
        vector<int> sol;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                sol.emplace_back(a[top][i]);
            top++;
            for (int i = top; i <= bottom; i++)
                sol.emplace_back(a[i][right]);
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    sol.emplace_back(a[bottom][i]);
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    sol.emplace_back(a[i][left]);
                left++;
            }
        }
        return sol[k-1];
    }
};
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> sol;
        int ans = 1;
        sol.emplace_back(ans);
        for (int col = 1; col < n; col++)
        {
            ans *= (n - col);
            ans /= col;
            sol.emplace_back(ans);
        }
        return sol;
    }
};

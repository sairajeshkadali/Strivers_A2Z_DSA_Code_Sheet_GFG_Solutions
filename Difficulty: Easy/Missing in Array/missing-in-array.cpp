class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        int res = n+1 ^ n;
        for(int i = 0; i < n; i++) {
            res ^= i;
            res ^= arr[i]; 
        }
        return res;
    }
};
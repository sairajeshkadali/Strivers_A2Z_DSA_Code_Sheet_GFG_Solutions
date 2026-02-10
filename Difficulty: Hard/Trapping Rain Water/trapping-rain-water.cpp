class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size(), waterCount = 0, maxarr = arr[n - 1];
        vector<int> prevGre(n, -1);
        for(int i = 1; i < n; i++){
            prevGre[i] = max(prevGre[i - 1], arr[i - 1]);
        }
        for(int j = n - 2; j >= 1; j--){
            prevGre[j] = min(prevGre[j], maxarr);
            maxarr = max(maxarr, arr[j]);
        }
        for(int i = 1; i < n - 1; i++){
            if(prevGre[i] > arr[i]){
                waterCount += prevGre[i] - arr[i];
            }
        }
        return waterCount;
    }   
};
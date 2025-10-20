class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n = arr.size();
        if(n == 0)
            return 0;
        int maxOneCount = 0, maxZeroCount = 0, oneCount = 0, zeroCount = 0;
        for(int num : arr){
            if(num){
                oneCount++;
                zeroCount = 0;
            }else{
                oneCount = 0;
                zeroCount++;
            }
            maxOneCount = max(maxOneCount, oneCount);
            maxZeroCount = max(maxZeroCount, zeroCount);
        }
        return max(maxOneCount, maxZeroCount);
    }
};
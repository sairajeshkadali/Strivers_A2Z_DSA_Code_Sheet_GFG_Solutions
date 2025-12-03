class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxSum = INT_MIN, sum = 0;
    for(int num : arr){
        sum += num;
        maxSum = max(maxSum, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
    }
};
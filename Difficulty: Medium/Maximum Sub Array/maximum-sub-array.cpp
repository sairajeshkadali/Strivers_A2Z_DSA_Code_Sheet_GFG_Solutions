// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        vector<int> sol;
        int n = arr.size(), startIndex = 0, endIndex = 0, start;
    long long maxSum = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if (sum == 0){
            start = i;
        }
        
        if(arr[i] < 0){
            sum = 0; 
        }else{
            sum += arr[i];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
            startIndex = start;
            endIndex = i; 
        }else if(sum == maxSum){
            if((i-start) > endIndex - startIndex){
            startIndex = start;
            endIndex = i;
            }
        }
    }
    for (int i = startIndex; i <= endIndex; i++){
        sol.emplace_back(arr[i]);
    }
    if (maxSum == 0){
        return vector<int>{-1};
    }else
        return sol;
    }
};
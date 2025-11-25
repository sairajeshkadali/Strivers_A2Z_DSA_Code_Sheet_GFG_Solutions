class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> preSumMap;
        int n = arr.size(), maxLen = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum == k){
                maxLen = max(maxLen, i + 1);
            }
            if(preSumMap.find(sum - k) != preSumMap.end()){
                maxLen = max(maxLen, i - preSumMap[sum - k]);
            }
            if(preSumMap.find(sum) == preSumMap.end())
                preSumMap[sum] = i;
        }
        return maxLen;
    }
};
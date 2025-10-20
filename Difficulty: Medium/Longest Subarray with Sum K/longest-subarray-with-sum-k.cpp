class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int maxSubArr = 0, n = arr.size();
        long long sum = 0;
        unordered_map<long long, int> hash;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum == k){
                maxSubArr = max(maxSubArr, i + 1);
            }
            long long rem = sum - k;
            if(hash.find(rem) != hash.end()){
                int len = i - hash[rem];
                maxSubArr = max(maxSubArr, len);
            }
            if(hash.find(sum) == hash.end())
                hash[sum] = i;
        }
        return maxSubArr;
    }
};
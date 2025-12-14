class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        int count = 0, n = arr.size();
        long long prefixSum = 0;
        unordered_map<long long, int> freqSet;
        freqSet[prefixSum]++;
        for (int i = 0; i < n; i++)
        {
            prefixSum += arr[i];
            int remSum = prefixSum - k;
            if(freqSet.find(remSum) != freqSet.end())
                count += freqSet[remSum];
            freqSet[prefixSum]++;
        }
        return count;
    }
};
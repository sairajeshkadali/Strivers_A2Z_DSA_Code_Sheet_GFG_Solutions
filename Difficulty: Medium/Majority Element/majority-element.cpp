class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int, int> freqCount;
        int n = 0;
        for(int num : arr){
            ++freqCount[num];
            ++n;
        }
        for(auto &num : freqCount)
        {
            if(num.second > n / 2)
                return num.first;
        }
        return -1;
    }
};
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector < pair<int, int>> aug_arr;
        for (int i = 0; i < n; i++)
            aug_arr.push_back({arr[i], i});
        sort(aug_arr.begin(), aug_arr.end());
        int left = 0, right = n - 1, sum;
        while(left < right){
            sum = aug_arr[left].first + aug_arr[right].first;
            if(sum == target){
                return true;
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return false;
    }
};
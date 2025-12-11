class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size(), index = n;
        int low = 0, high = n-1, mid;
        while(low <= high){
            mid = (low + high)/2;
            if(arr[mid] >= target){
                index = mid;
                high = mid -1;
            }else if(arr[mid] < target){
                low = mid + 1;
            }
        }
        return index;
    }
};

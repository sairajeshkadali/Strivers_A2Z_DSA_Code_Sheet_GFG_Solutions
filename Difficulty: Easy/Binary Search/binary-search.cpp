class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int index = -1;
        int low = 0, high = arr.size() -1, mid;
        while(low <= high){
            mid = (low+high) / 2;
            if(arr[mid] == k){
                index = mid;
                high = mid - 1;
            }else if(arr[mid] > k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return index;
    }
};
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size(), maxEle;
        deque<int> sol;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                sol.push_front(arr[i]);
                maxEle = arr[i];
            }
            else if (arr[i] >= maxEle)
            {
                sol.push_front(arr[i]);
                maxEle = max(arr[i], maxEle);
            }
        }
        vector<int> v(sol.begin(), sol.end());
        return v;
    }
};
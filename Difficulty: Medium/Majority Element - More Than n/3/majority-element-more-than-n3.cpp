class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        unordered_map <int, int> hashMap;
        vector<int> sol;
        for (int i = 0; i < n; i++)
            hashMap[arr[i]]++;
        
        for(auto it : hashMap){
            if(it.second > n / 3)
                sol.emplace_back(it.first);
        }
        if(sol.size() == 2 && sol[0] > sol[1])
            swap(sol[0], sol[1]);
        return sol;
    }
};
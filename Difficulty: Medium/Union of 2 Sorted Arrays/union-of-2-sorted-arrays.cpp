class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
        set<int> Union;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                Union.insert(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j])
            {
                Union.insert(a[i++]);
            }
            else
            {
                Union.insert(b[j++]);
            }
        }
        while (i < n)
            Union.insert(a[i++]);
        while (j < m)
            Union.insert(b[j++]);
        return vector<int> (Union.begin(), Union.end());
    }
};
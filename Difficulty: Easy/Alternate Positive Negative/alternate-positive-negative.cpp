// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int> positivearr, negativearr;
        for (int num : arr)
        {
            if(num >= 0)
                positivearr.emplace_back(num);
            else
                negativearr.emplace_back(num);
        }
        int n = positivearr.size(), m = negativearr.size(), maxLen, minLen;
        if(n >= m){
            maxLen = n;
            minLen = m;
        }else{
            maxLen = m;
            minLen = n;
        }
        for (int i = 0; i < minLen; i++)
        {   
            arr[2*i] = positivearr[i];
            arr[2*i+1] = negativearr[i];
        }
        int index = minLen * 2;
        for (int j = minLen; j < maxLen; j++)
        {
            if(maxLen == n)
                arr[index] = positivearr[j];
            else
                arr[index] = negativearr[j];
            ++index;
        }
    }
};
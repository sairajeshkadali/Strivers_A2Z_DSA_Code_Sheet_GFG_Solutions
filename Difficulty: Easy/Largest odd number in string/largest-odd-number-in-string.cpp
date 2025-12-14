class Solution {
  public:
    string maxOdd(string s) {
        int n = s.length(), endIndex = -1, startIndex = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if((s[i] - '0')%2)
            {    
                endIndex = i;
                break;
            }
        }
        while (startIndex <= n && s[startIndex] == '0')
            startIndex++;
        return s.substr(startIndex, endIndex+1);
    }
};
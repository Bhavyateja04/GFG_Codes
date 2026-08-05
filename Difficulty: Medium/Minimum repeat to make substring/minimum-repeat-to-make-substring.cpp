class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
         int n = s1.length();
        int m = s2.length();
        
        int k = m / n;
        string ans = "";
        
        for (int i = 1; i <= k + 2; i++) {
            ans += s1;
            if (ans.find(s2) != string::npos) {
                return i;
            }
        }
        return -1;
    }
};
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
         int n=arr.size();
        int n1=arr[0].size();
        for(int i=1;i<n;i++)
        {
            n1=min(n1,(int)arr[i].size());
        }
       string s = "";
        
        for(int i = 0; i < n1; i++) {
            char ch = arr[0][i];
            
            for(int j = 1; j < n; j++) {
                if(arr[j][i] != ch) {
                    return s; // stop on mismatch
                }
            }
            
            s += ch;
        }
        
        return s;
    }
};
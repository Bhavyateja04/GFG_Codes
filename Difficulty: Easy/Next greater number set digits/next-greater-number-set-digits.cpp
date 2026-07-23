
class Solution {
  public:
    int findNext(int N) {
        // code here.
        string s=to_string(N);
    next_permutation(s.begin(),s.end());
      
      if(stoi(s)<N)
      {
          return -1;
      }
    
    return stoi(s);
    }
};
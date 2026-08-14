class Solution {
  public:
    int findNum(int n) {
        // code here
        int s = 4;
        int e = (5*n) + 1;
        int mid = s +(e-s)/2;
        while(s<e){
           int kcount = 0;
           int c = 5;
           int r = -1;
           while(r != 0){
             r = mid/c;
             kcount = kcount + r;
             c = c*5;
           }
           if(kcount >= n){
               e = mid;
           }
           else if(kcount<n){
               s = mid + 1;
           }
           mid = s +(e-s)/2;
         }
         return mid;
    }
};
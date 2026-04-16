class Solution {
  public:
    int m=1e9+7;
       int nthTerm(int a, int r, int n){
           // Code here
           int N=n-1;
           if(N==0) return a%m;
           long long result=1;
           while (N > 0) {
        // If b is odd, multiply result with x modulo m
        if (N % 2 == 1) {
            result = (result * r) % m;
        }
        
        // Square x and reduce modulo m
        r = (1LL*r * r) % m;
        
        // Divide b by 2
        N /= 2;
    }
    
    return (a*result)%m;
    
       }    
};
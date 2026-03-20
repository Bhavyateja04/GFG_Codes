// User function Template for C++

char extraChar(string &s1, string &s2) {

    // code here
      char result =0;
    
    for(char c: s1){
        result ^=c;
    }
    for(char c : s2){
        result ^= c;
        
    }
    return result ;
}
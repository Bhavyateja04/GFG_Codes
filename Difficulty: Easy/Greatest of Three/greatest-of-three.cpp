// User function Template for C++

int find_greatest_number(int a, int b, int c) {
    // Write your code here..
     if (a >= b) {
        if (a >= c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b >= c) {
            return b;
        }
        else {
            return c;
        }
    }
    return 0;
}
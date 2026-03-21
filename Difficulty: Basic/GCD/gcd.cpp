// User function Template for C++

int gcd(int a, int b) {
    // code here to calculate and return gcd of a and b
     int c=0;
        for(int i=1;i<=a && i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                c=i;
            }
        }
        return c;
}
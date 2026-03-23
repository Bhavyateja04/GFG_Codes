class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
          int add = A + B;
        int mul = A * B;
        int sub;
        int div;
        if (A > B) {
            sub = A - B;
            div = A / B;
        }
        else {
            sub = B - A;
            div = B / A;
        }
        return {add,mul,sub,div};
    }
};
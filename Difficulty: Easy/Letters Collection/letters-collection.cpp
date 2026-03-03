// User function Template for C++

class Solution {
  public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q,
                          vector<int> queries[]) {
        // code here
        vector<int> res;



        for (int k = 0; k < q; k++) {

            vector<int> currQ = queries[k];

            int hops = currQ[0]; 

            int iPos = currQ[1]; 

            int jPos = currQ[2]; 



            int sum = 0;

            for (int i = iPos - hops; i <= iPos + hops; i++) {

                if (i < 0 || i >= n) {

                    continue; 

                }

                for (int j = jPos - hops; j <= jPos + hops; j++) {

                    if (j < 0 || j >= m) {

                        continue; 

                    }



                    if (i == iPos && j == jPos) {

                        continue;

                    }



                    bool isPerimeter = false;

                    if (i == iPos - hops) { 

                        isPerimeter = true;

                    }

                    if (i == iPos + hops) { 

                        isPerimeter = true;

                    }

                    if (j == jPos - hops) { 

                        isPerimeter = true;

                    }

                    if (j == jPos + hops) { 

                        isPerimeter = true;

                    }



 

                    if (isPerimeter) {

                        sum += mat[i][j];

                    }

                }

            }

 

            res.push_back(sum);

       }

        return res;

    }
};
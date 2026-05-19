class Solution {
public:
    int minSteps(vector<int>& arr, int start, int end) {

        if(start == end) return 0;

        int MOD = 1000;

        queue<pair<int,int>> q;
        vector<int> visited(MOD, 0);

        q.push({start, 0});
        visited[start] = 1;

        while(!q.empty()) {

            auto [num, steps] = q.front();
            q.pop();

            for(int i = 0; i < arr.size(); i++) {

                int newNum = (1LL * num * arr[i]) % MOD;

                if(newNum == end)
                    return steps + 1;

                if(!visited[newNum]) {
                    visited[newNum] = 1;
                    q.push({newNum, steps + 1});
                }
            }
        }

        return -1;
    }
};
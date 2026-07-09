class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
          vector<int>ans(arr.size(), 1);
        stack<int>s;
        for(int i=0; i<arr.size(); i++)
        {
            while(!s.empty() && arr[s.top()]<=arr[i])
            {
                ans[i]+=ans[s.top()];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};
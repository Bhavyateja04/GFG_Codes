class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        // Code here
          sort(arr1.begin(), arr1.end());
        
        vector<pair<int, int>> ans;
        map<int, int> mp;
    
        for (auto it: arr2) {
            mp[it]++;
        }        
        
        for (auto it: arr1) {
            int val = target - it;
            int freq = mp[val];
            while (freq) {
                ans.push_back({it, val});
                freq--;
            }  
        }
        
        return ans;
    }
};
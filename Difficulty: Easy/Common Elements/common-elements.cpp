//Back-end complete function Template for C++

class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        // Your code here
          unordered_map<int, int> freq;
    for (int i : b) {
        freq[i]++;
    }
    
    vector<int> ans;
    for (int i : a) {
        if (freq[i] > 0) {
            ans.push_back(i);
            freq[i]--; 
        }
    }
    sort(ans.begin(), ans.end());
    
    return ans;
    }
};
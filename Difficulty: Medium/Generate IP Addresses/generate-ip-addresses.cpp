class Solution {
public:
    bool valid(string s) {
        if(s.size() > 1 && s[0] == '0') return false;
        int num = stoi(s);
        return num >= 0 && num <= 255;
    }

    void solve(string &s, int idx, int parts, string curr, vector<string> &ans) {
        
        if(parts == 4 && idx == s.size()) {
            curr.pop_back();
            ans.push_back(curr);
            return;
        }

        if(parts == 4 || idx == s.size()) return;

        for(int len = 1; len <= 3 && idx + len <= s.size(); len++) {
            string segment = s.substr(idx, len);

            if(valid(segment)) {
                solve(s, idx + len, parts + 1, curr + segment + ".", ans);
            }
        }
    }

    vector<string> generateIp(string s) {
        vector<string> ans;
        solve(s, 0, 0, "", ans);
        return ans;
    }
};
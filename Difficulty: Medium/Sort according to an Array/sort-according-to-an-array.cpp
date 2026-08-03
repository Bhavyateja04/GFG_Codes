class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        // code here
        unordered_map<int, int> myMap;
        vector<int> res;

        for(int i = 0; i < a1.size(); i++){
            myMap[a1[i]]++;
        }

        for(int j = 0; j < a2.size(); j++){
            if(myMap[a2[j]] > 0){
                int cnt = myMap[a2[j]];
                for(int k = 0; k < cnt; k++){
                    res.push_back(a2[j]);
                }
                myMap[a2[j]] = 0;
            }
        }

        int lowerBd = res.size();

        for(auto const& [val, count] : myMap){
            for(int i = 0; i < count; i++){
                res.push_back(val);
            }
        }

        sort(res.begin() + lowerBd, res.end());

        a1 = res;
    }
};

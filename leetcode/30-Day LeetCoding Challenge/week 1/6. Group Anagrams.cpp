class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> v;
        vector<vector<string>> vv;
        for(int i = 0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            v[key].push_back(strs[i]);
        }
        for(auto n : v){
            vv.push_back(n.second);
        }
        return vv;
    }
};

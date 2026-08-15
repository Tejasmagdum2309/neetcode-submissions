class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for(auto s : strs){
            string ns = s;
            sort(ns.begin(),ns.end());
            
            if(m.find(ns) != m.end()){
                m[ns].push_back(s);
            }
            else{
                m[ns].push_back(s);
            }
        }

        vector<vector<string>> ret;

        for(auto [key,val] : m){
            ret.push_back(val);
        }

        return ret;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;

        for(char c : s){
            if(map.find(c) != map.end()){
                 map[c] += 1;
            }
            else{
                map[c] = 1;
            }
        }

        for(char c : t){
            if(map.find(c) != map.end()){
                 map[c] -= 1;
                 if(map[c] == 0) map.erase(c);
            }
            else{
                return false;
            }
        }

        return map.empty();




    }
};

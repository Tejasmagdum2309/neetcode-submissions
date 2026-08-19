class Solution {
public:

    bool isNum(char c){

        int ans = c - '0';

        if(ans >= 0 && ans <= 9) return 1;
        return 0;
    }

    string encode(vector<string>& strs) {
         string s;

         for(auto str : strs){
             int len = str.length();

             s += (to_string(len) + "#" + str);
 
         }

         return s;
    }
    


    vector<string> decode(string s) {
        vector<string> strs;

        for(int i = 0;i<s.length();i++){
            string nums = "";
            while(i >= 0 && s[i] != '#'){
               nums += s[i++];
            }

            int num = stoi(nums);

            string a = "";

            while(num--){
                a += s[++i];
            }

            strs.push_back(a);
        }
        
        return strs;
    }
};

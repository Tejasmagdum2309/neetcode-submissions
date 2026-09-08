class Solution {
public:
    
    bool isChar(char c){
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
            return 1;
        }
        return 0;
    }
    
    bool isPalindrome(string s) {
        int j = s.length()-1;
        int i = 0;

        while(i <= j){
           
           while(i <= j && !isChar(s[i])){
                i++;
           }
           while(i <= j && !isChar(s[j])){
                j--;
           }
           if(i > j) return true;
           int lchar = s[i];
           int rChar = s[j];
           
           if(tolower(lchar) != tolower(rChar)) return 0;
            i++;j--;

           
        }
        return 1;
    }
};

class Solution {
public:
    bool isAlpha(char c){
        if((c>='0' && c<='9') ||(tolower(c)>='a' && tolower(c)<='z')) 
        return true;

        return false;
    }
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(!isAlpha(s[l])){
                l++;
                continue;
            }
            if(!isAlpha(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};

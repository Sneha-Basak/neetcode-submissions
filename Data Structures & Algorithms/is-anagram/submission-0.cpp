class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> q;
        unordered_map<char,int> r;
        for(int i=0;i<s.length();i++){
            q[s[i]]++;
            r[t[i]]++;
        }
        return q==r;
    }
};

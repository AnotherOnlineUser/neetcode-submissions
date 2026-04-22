class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s1;
        map<char, int> s2;
        for(int i=0; i<s.size(); i++){
            s1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            s2[t[i]]++;
        }
        return s1==s2;
    }
};

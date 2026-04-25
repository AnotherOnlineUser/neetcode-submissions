class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto x: strs){
            s += to_string(x.size());
            s += '#';
            s += x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int c = 0;

while(c < s.size()){
    string num = "";

    // read length
    while(s[c] != '#'){
        num += s[c];
        c++;
    }

    int len = stoi(num);
    c++; // skip '#'

    string word = "";

    // read word
    while(len--){
        word += s[c];
        c++;
    }

    res.push_back(word);
}
        return res;
    }
};

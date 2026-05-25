class Solution {
public:
    bool isPalindrome(string S) {
        string s="";

        for(char c:S){
            if(isalnum(c)) s+=tolower(c);
        }

        int left = 0, right=s.size()-1;
        
        while(left<=right){
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};

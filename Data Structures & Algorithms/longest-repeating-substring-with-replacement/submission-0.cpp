class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
         int left = 0, maxfreq = 0, result=0;

         for(int right=0; right<s.size(); right++){

            mp[s[right]]++;
            maxfreq = max(maxfreq, mp[s[right]]);

            while((right-left+1) - maxfreq > k){
                mp[s[left]]--;
                left++;
            }
            result = max(result, right-left+1);
         }
         return result;
    }
};

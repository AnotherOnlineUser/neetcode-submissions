class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxcount;
        unordered_set<int> s(nums.begin(), nums.end());
        for( int x: nums){
            int current = x;
            int streak = 1;

            while(s.count(current+1)){
                current++;
                streak++;
            }

            maxcount = max(maxcount, streak);
        }
        return maxcount;

    }
};


/*
go through array
check +1, -1 in set 
count++ if exist 
if not, add number to set 
*/
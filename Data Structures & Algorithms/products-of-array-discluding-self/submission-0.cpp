class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int left, right;

        for(int i=0; i<nums.size(); i++){
            left = i - 1; 
            right = i + 1;

            int p1 = 1;
            int p2 = 1;
            while(left>=0){
                p1 *= nums[left];
                left--;
            }
            while(right < nums.size()){
                p2 *= nums[right];
                right++;
            }

        res.push_back(p1*p2);
        }
    return res;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
vector<int> postfix(nums.size());
vector<int> output(nums.size());

// prefix
prefix[0] = 1;
for(int i = 1; i < nums.size(); i++){
    prefix[i] = prefix[i-1] * nums[i-1];
}

// postfix
postfix[nums.size()-1] = 1;
for(int i = nums.size()-2; i >= 0; i--){
    postfix[i] = postfix[i+1] * nums[i+1];
}

// output
for(int i = 0; i < nums.size(); i++){
    output[i] = prefix[i] * postfix[i];
}

return output;

        /*
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
    */
    }
};

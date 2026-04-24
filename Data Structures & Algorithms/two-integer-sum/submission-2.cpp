class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            int remain = target - nums[i];
            if (mp.find(remain)!= mp.end()){
                return {mp[remain], i};
            }
            mp[nums[i]] = i;

        }

        /*int left=0, right=nums.size()-1;
        vector<int> res;
        while(left<right){
            if (nums[left]+nums[right]==target) {
                res.push_back(left);
                res.push_back(right);
                break;
            }
            if (abs(nums[left]+nums[right]) < abs(target)) left++;
            if (abs(nums[left]+nums[right]) > abs(target)) right--;
        }
        return res;*/
    }
};

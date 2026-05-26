class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        int left = 0, right = heights.size()-1;

        while(left<right){
            int water = min(heights[left], heights[right]) * (right-left);
            maxwater = max(maxwater, water);

            if(heights[left]<heights[right]) left++;
            else if(heights[left]>heights[right]) right--;
            else left++;
        }
        return maxwater;
    }
};

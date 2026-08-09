class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_vol = 0;
        int left = 0;
        int right = heights.size() - 1;
        int i = 0;
        while(left < right){
            int current_vol = (abs(left - right)) * min(heights[left], heights[right]);
            max_vol = max(max_vol, current_vol);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_vol;
    }
};

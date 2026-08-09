class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
                int left = i+1;
                int right = nums.size() - 1;
                int current_sum = 0;

                while(left < right){
                    current_sum = nums[left] + nums[right] + nums[i];
                    if(current_sum == 0){
                        res.push_back({nums[left], nums[right], nums[i]});
                        left++;
                        while(left < right && nums[left] == nums[left - 1]){
                            left ++;
                        }

                    }
                    else if(current_sum > 0){
                        right--;

                    }
                    else if(current_sum < 0){
                        left++;
                    }
                }

        }
        return res;
    
    }
};
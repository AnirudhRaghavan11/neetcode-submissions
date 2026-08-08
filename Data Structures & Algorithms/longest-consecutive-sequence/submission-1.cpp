class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(),            nums.end());    
        int longest_streak = 0;
        int curr_streak = 1;
        for(int i = 0; i < nums.size(); i++){
            if(!(seq.count(nums[i] - 1))){
                curr_streak = 1;
                int current_num = nums[i];
                while(seq.count(current_num + 1)){
                    current_num++;
                    curr_streak++;
                }
            }
            longest_streak = max(longest_streak, curr_streak);
        }
        return longest_streak;
    }
};

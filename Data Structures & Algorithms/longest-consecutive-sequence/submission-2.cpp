class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(),            nums.end());    
        int longest_streak = 0;
        int curr_streak = 1;
        for(int num: seq){
            if(!(seq.count(num - 1))){
                curr_streak = 1;
                int current_num = num;
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

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0; 
        int end = numbers.size() - 1;
        int current_sum = 0;
        vector<int> res;
        while(start < end){
            current_sum = numbers[start] + numbers[end];
            if(current_sum == target){
                res.push_back(start+1);
                res.push_back(end+1);

                return res;
            }
            else if(current_sum > target){end--;}
            else if(current_sum < target){start++;}

        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> word;
        int max_len = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++){
            while(word.count(s[right])){
                word.erase(s[left]);
                left++;
            }
            word.insert(s[right]);
            max_len = max(max_len, right - left + 1);

        } 
        return max_len;
    }
};

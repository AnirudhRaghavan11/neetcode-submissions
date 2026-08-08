class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        // 1. Clean the string: keep only lowercase alphanumeric characters
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        
        // 2. Reverse and compare using your exact logic
        string r = cleaned;
        reverse(r.begin(), r.end());
        
        return r == cleaned;
    }
};

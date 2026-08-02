class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> anagram_check;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            anagram_check[s[i]]++;
        }
        for(int j = 0; j < t.length(); j++){
            if(anagram_check[t[j]] > 0){
                anagram_check[t[j]]--;
                count++;
            }
        }
        if(count == s.length()){
            return true;
        }
        return false;
    }
};
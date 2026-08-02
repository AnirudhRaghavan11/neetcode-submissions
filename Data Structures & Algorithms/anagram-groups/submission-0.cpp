class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        vector<vector<string>> result;
        for(int i = 0; i < strs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            anagram[sorted].push_back(strs[i]);
        }
        for(auto& pair: anagram){
            result.push_back(move(pair.second));
        }
        
        return result;
    }
};

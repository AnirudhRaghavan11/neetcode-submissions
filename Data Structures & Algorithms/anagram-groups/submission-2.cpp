class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (const string& s: strs){
            //Initialize  a string of 26 null chars
            string key(26, 0);

            for (char c: s){
                key[c - 'a']++;
            }
            map[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto& pair : map){
            result.push_back(move(pair.second));
        }
        return result;
    }
};

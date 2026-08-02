class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string &s: strs){
            res += to_string(s.size()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        size_t i = 0;
        while(i < s.size()){
            size_t j = s.find('#', i); 
            if(j == string::npos) break;

            int length = stoi(s.substr(i, j-i));
            string word = s.substr(j+1, length);
            res.push_back(word);
            i = j + 1 + length;
        }
        return res;
    }
};

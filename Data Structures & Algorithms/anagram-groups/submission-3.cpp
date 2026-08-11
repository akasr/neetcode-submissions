class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> track;
        for (string str: strs) {
            vector<int> chr(26, 0);
            for (char c: str) {
                chr[c-'a']++;
            }
            string key = to_string(chr[0]);
            for (int i = 1; i < 26; i++) {
                key += ',' + to_string(chr[i]);
            }

            track[key].push_back(str);
        }

        vector<vector<string>> output;
        for (auto& [k, v]: track) {
            output.push_back(v);
        }

        return output;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> track;
        for (string s: strs) {
            string m = s;
            sort(m.begin(), m.end());
            track[m].push_back(s);
        }

        vector<vector<string>> output;
        for (auto& [key, value]: track) {
            output.push_back(value);
        }
        return output;
    }
};

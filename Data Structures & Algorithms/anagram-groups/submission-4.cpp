class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> store;
        for (string& str: strs) {
            string str2(str);
            sort(str2.begin(), str2.end());
            store[str2].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& [key, value]: store) {
            result.push_back(value);
        }

        return result;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, int>> strs2;
        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            strs2.push_back({s, static_cast<size_t>(i)});
        }
        sort(strs2.begin(), strs2.end());

        vector<vector<string>> output;
        vector<string> curr = {strs[strs2[0].second]};
        for (int i = 1; i < strs.size(); i++) {
            if (strs2[i].first == strs2[i-1].first) {
                curr.push_back(strs[strs2[i].second]);
            } else {
                output.push_back(curr);
                curr = {strs[strs2[i].second]};
            }
        }
        output.push_back(curr);

        return output;
    }
};

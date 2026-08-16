class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> track(26, 0);
        for (int i = 0; i < s.size(); i++) {
            track[s[i] - 'a']++;
            track[t[i] - 'a']--;
        }

        for (int j: track) {
            if (j != 0) {
                return false;
            }
        }
        return true;
    }
};

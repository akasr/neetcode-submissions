class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> trackS;
        unordered_map<char, int> trackT;

        for (int i = 0; i < s.size(); i++) {
            trackS[s[i]]++;
            trackT[t[i]]++;
        }

        return trackS == trackT;
    }
};

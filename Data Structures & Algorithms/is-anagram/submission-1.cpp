class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> countS;
        unordered_map<char, int>countT;

        for (int i = 0; i < s.size(); i++) {
            if (countS.find(s[i]) == countS.end()) {
                countS[s[i]] = 1;
            } else {
                countS[s[i]] += 1;
            }

            if (countT.find(t[i]) == countT.end()) {
                countT[t[i]] = 1;
            } else {
                countT[t[i]] += 1;
            }
        }

        return countS == countT;
    }
};

class Solution {
public:
    string makeAlphaNumeric(string s) {
        string t = "";
        for (char ch: s) {
            if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90)) {
                t += ch;
            } else if (ch >= 97 && ch <= 122) {
                t += (ch - 32);
            }
        }
        return t;
    }

    bool isPalindrome(string s) {
        s = makeAlphaNumeric(s);
        int l = 0, r = s.size()-1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

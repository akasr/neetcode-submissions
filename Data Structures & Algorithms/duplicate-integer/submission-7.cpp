class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> track;
        for (int i: nums) {
            if (track.find(i) != track.end()) { return true; }
            track[i] = true;
        }
        return false;
    }
};
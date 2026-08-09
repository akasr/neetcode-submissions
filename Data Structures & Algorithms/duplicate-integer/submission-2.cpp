class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++) {
            if (count.find(nums[i]) == count.end()) {
                count[nums[i]] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
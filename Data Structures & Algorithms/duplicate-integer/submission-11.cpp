class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0)
            return false;

        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.contains(nums[i]))
                return true;
            seen.insert(nums[i]);
        }

        return false;
    }
};
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> track;

        for (int i = 0; i < nums.size(); i++) {
            int left = target - nums[i];
            if (track.find(left) != track.end()) {
                return { track[left], i };
            }

            track[nums[i]] = i;
        }

        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> track;

       for (int i = 0; i < nums.size(); i++) {
        int second = target - nums[i];
        if(track.find(second) != track.end()) {
            return {min(i, track[second]), max(i, track[second])};
        }

        if(track.find(nums[i]) == track.end()) {
            track[nums[i]] = i;
        }
       }

       return {};
    }
};

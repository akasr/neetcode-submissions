class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> track;

       for (int i = 0; i < nums.size(); i++) {
        int second = target - nums[i];
        if(track.find(second) != track.end()) {
            return {track[second], i};
        }

        track.insert({nums[i], i});
       }

       return {};
    }
};

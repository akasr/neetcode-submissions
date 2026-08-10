class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int, int>> track;
       for (int i = 0; i < nums.size(); i++) {
        track.push_back({nums[i], i});
       }

       sort(track.begin(), track.end());
       int l = 0, r = nums.size() - 1;
       while (l < r) {
        int sum = track[l].first + track[r].first;

        if (sum == target) return {min(track[l].second, track[r].second), max(track[l].second, track[r].second)};

        if (sum < target) {
            l++;
        } else {
            r--;
        }
       }

       return {};
    }
};

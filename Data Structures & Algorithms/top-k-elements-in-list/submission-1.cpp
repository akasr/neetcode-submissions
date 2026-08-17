class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq1;
        for (int i : nums) {
            freq1[i]++;
        }

        vector<pair<int, int>> freq2;
        for (auto& [k, v] : freq1) {
            freq2.push_back({v, k});
        }
        sort(freq2.rbegin(), freq2.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freq2[i].second);
        }

        return result;
    }
};

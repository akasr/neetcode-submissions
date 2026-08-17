class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq1;
        for (int i : nums) {
            freq1[i]++;
        }

        map<int, vector<int>> reverse_freq1;
        for (auto& [k, v] : freq1) {
            reverse_freq1[v].push_back(k);
        }

        vector<int> freq2;
        for (auto& [k, v]: reverse_freq1) {
            for (int i: v) {
                freq2.push_back(i);
            }
        }

        for (int i: freq2) {
            cout << i << " ";
        }

        vector<int> result;
        int n = freq2.size() - 1;
        for (int i = n; i > n - k; i--) {
            result.push_back(freq2[i]);
        }

        return result;
    }
};

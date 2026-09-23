class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxm = 0;
        int l = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[l] <= prices[i]) {
                maxm = max(maxm, prices[i]-prices[l]);
            } else {
                l = i;
            }
        }

        return maxm;
    }
};

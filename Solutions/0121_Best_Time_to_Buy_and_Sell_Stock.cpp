class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices.at(0);

        for (int i = 1; i < prices.size(); ++i) {
            if (prices.at(i) < buy) {
                buy = prices.at(i);
            }

            else if (prices.at(i) - buy > profit) {
                profit = prices.at(i) - buy;
            }
        }

        return profit;
    }
};
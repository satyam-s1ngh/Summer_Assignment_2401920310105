class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int pr = 0;
        int diff=0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }
             diff=prices[i] - buy;
             if (diff > pr) {
                pr = prices[i] - buy;
            }
        }
        return pr;
    }
};

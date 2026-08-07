class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        int i = 0;
        int j = 0;

        while(j < prices.size()){
            int profit = prices[j] - prices[i];
            max = profit > max ? profit : max;
            j++;
            if(j<prices.size() && prices[j] < prices[i]) i = j;
        }

        return max;
    }
};
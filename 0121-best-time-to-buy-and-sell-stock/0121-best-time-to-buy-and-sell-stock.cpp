class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy= 0 , sell= 1 , maxprofit=0 ;
        while (sell<prices.size()){
            if (prices[buy]<prices[sell]){
                int profit = prices[sell] - prices[buy];
                maxprofit=max(profit, maxprofit);
            }
            else{
                buy = sell;
            }
            sell++;
        }
        return maxprofit;
    }
};
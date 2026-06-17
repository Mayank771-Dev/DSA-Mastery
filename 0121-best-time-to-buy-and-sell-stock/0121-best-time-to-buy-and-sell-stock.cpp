class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice=prices[0];
        int sellPrice=0;
        int profit=0;
        for(int i=1;i<prices.size();i++){
            sellPrice=prices[i];
            if(sellPrice<buyPrice){
                buyPrice=prices[i];
            }
            else{
                int diff=sellPrice-buyPrice;
                profit=max(profit,diff);
            }
        }
        return profit;
    }
};
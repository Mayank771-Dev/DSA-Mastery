class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Totalprofit=0;
        int Hold=prices[0];
        for(int i=1;i<prices.size();i++){
            if(Hold>prices[i]){
                Hold=prices[i];
            }
            else{
                int HoldTill=i;
                while(i+1<prices.size() && prices[HoldTill]<prices[i+1]){
                    HoldTill=i+1;
                    i++;
                }
                int profit=prices[HoldTill]-Hold;
                Totalprofit+=profit;
                if(i<prices.size()) Hold=prices[i];
            }
        }
        return Totalprofit;
    }
};
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        buyTime=0
        maxprofit=0
        for i in range(1,len(prices)):
            if prices[i]<prices[buyTime]:
                buyTime=i
            else:
                maxprofit=max(maxprofit,prices[i]-prices[buyTime])
        return maxprofit
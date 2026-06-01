class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<>());
        int minCost=cost[0];
        for(int i=1;i<cost.size();i++){
            if(i%3==2) continue;
            else{
                minCost+=cost[i];
            }
        }
        return minCost;
    }
};
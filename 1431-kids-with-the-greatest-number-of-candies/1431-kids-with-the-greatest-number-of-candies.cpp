class Solution {
public:
    int MaxVal(vector<int>& candies){
        int Max=INT_MIN;
        for(int i=0;i<candies.size();i++){
            Max=max(Max,candies[i]);
        }
        return Max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Maximum=MaxVal(candies);
        vector<bool>result;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=Maximum) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};
class Solution {
public:
    long long minSpeed(vector<int>& piles,int speed){
        long long time=0;
        for(int i=0;i<piles.size();i++){
            time += (piles[i] + speed - 1) / speed;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            long long result=minSpeed(piles,mid);
            if(result>h){
                low=mid+1;
            }
            else high=mid;
        }
        return low;
    }
};
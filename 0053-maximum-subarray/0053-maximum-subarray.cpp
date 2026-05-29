class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        int MaxSum=nums[0];
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=nums[i];
            MaxSum=max(MaxSum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return MaxSum;
    }
};
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size=nums.size();
        if(nums.size()==1) return {0};
        int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+nums[i];
        }
        vector<int>leftSum;
        leftSum.push_back(0);
        int val=0;
        for(int i=1;i<size;i++){
            val=val+nums[i-1];
            leftSum.push_back(val);
        }
        vector<int>rightSum;
        for(int i=0;i<size-1;i++){
            sum=sum-nums[i];
            rightSum.push_back(sum);
        }
        rightSum.push_back(0);
        vector<int>result;
        for(int i=0;i<size;i++){
            int val=leftSum[i]-rightSum[i];
            result.push_back(abs(val));
        }
        return result;
    }
};
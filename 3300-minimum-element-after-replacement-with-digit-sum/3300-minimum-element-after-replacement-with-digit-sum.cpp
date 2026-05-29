class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int digitSum=0;
            while(nums[i]!=0){
                digitSum+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
            nums[i]=digitSum;
        }
        int minVal=nums[0];
        for(int i=1;i<nums.size();i++){
            minVal=min(minVal,nums[i]);
        }
        return minVal;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount=0;
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(zeroCount>=2) break;
            if(nums[i]==0){
                zeroCount++;
                continue;
            }
            product=product*nums[i];
        }
        vector<int>result;
        if(zeroCount>=2){
            for(int i=0;i<nums.size();i++){
                result.push_back(0);
            }
            return result;
        }
        if(zeroCount==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) result.push_back(0);
                else result.push_back(product);
            }
            return result;
        }
        for(int i=0;i<nums.size();i++){
            int val=product/nums[i];
            result.push_back(val);
        }
        return result;
    }
};
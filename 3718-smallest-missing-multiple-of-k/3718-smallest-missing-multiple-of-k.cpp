class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hash[101];
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0) hash[nums[i]]=1;
            else hash[nums[i]]=0;
        }
        int i=1;
        while(k*i<101 && hash[k*i]!=0){
            i++;
        }
        return k*i;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int Maxlength=1;
        int length=1;
        if(nums.size()==0) return 0;
        for(int i=1;i<size;i++){
            if(nums[i]-nums[i-1]==1){
                length++;
            }
            if(nums[i]-nums[i-1]>1){
                Maxlength=max(Maxlength,length);
                length=1;
            }
        }
        if(length>Maxlength){
            Maxlength=length;
        }
        return Maxlength;
    }
};
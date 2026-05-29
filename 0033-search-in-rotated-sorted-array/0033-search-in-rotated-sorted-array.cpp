class Solution {
public:
int TargetIndex(vector<int>& arr, int key,int left, int right){
      while(left<=right){
          int mid=left+(right-left)/2;
          if(arr[mid]==key){
              return mid;
          }
          else if(arr[mid]>key){
              right=mid-1;
          }
          else left=mid+1;
      }
      return -1;
  }
    int search(vector<int>& nums, int target) {
        int result=-1;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<nums[left]){
                int left=mid;
                result=TargetIndex(nums,target,left,right);
                if(result!=-1) return result;
                else right=mid-1;
            }
            else{
                int right=mid;
                result=TargetIndex(nums,target,left,right);
                if(result!=-1) return result;
                else left=mid+1;
            }
        }
        return result;
    }
};
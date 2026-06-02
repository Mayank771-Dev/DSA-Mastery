class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        stack<int>canCheck;
        canCheck.push(start);
        bool exist=false;
        unordered_set<int>Checked;
        while(!canCheck.empty()){
            int val=canCheck.top();
            Checked.insert(val);
            canCheck.pop();
            if(arr[val]==0){
                exist = true;
                break;
            }
            else{
                int add=val+arr[val];
                int sub=val-arr[val];
                if(add<arr.size() && !Checked.contains(add))  canCheck.push(val+arr[val]);
                if(sub>=0 && !Checked.contains(sub)) canCheck.push(val-arr[val]);
            }
        }
        return exist;
    }
};
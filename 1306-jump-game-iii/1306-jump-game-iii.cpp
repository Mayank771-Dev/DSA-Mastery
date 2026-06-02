class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        stack<int>canCheck;
        canCheck.push(start);
        bool exist=false;
        unordered_set<int>Checked;
        while(!canCheck.empty()){
            int val=canCheck.top();
            if(Checked.contains(val)){
                canCheck.pop();
                continue;
            }
            Checked.insert(val);
            canCheck.pop();
            if (val < 0 || val >= (int)arr.size()) continue;
            if(arr[val]==0){
                exist = true;
                break;
            }
            else{
                if(val+arr[val]<=arr.size())  canCheck.push(val+arr[val]);
                if(val-arr[val]>=0) canCheck.push(val-arr[val]);
            }
        }
        return exist;
    }
};
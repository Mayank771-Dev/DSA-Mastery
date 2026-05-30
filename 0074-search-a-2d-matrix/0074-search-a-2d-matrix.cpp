class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found=false;
        int i=0;
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        while(i<matrix.size()){
            int j=matrix[i].size();
            if(target<=matrix[i][j-1]){
                break;
            }
            i++;
        }
        if (i >= matrix.size()) {
            return false;
        }
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==target){
                found=true;
                break;
            }
        }
        return found;
    }
};
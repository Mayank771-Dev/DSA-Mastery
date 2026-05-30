class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==nullptr) return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode*current=q.front();
                q.pop();
                if(current->left!=nullptr) q.push(current->left);
                if(current->right!=nullptr) q.push(current->right);
                temp.push_back(current->val);
            }
            result.push_back(temp);
        }
        return result;
    }
};
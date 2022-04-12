class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        while(!q.empty()){
            int valu = q.size();
            vector<int>ds;
            for(int i=0;i<valu;i++){
                TreeNode* temp = q.front();
                ds.push_back(temp->val);
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(ds);
        }
        return ans;
    }
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int right = 1+ maxDepth(root->right);
        int left = 1+ maxDepth(root->left);
        return max(left,right);
    }
};
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return 0;
        swap(root->left,root->right);
        if(root->left)invertTree(root->left);
        if(root->right)invertTree(root->right);
        return root;
    }
};

TC: O(N)
SC: O(1)
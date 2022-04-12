class Solution {
public:
    
    bool solve(TreeNode* root, long long int min,long long int max){
        if(!root)return true;
        
        if(root->val>=max || root->val<=min)return false;
        
        return solve(root->left,min,root->val) and solve(root->right,root->val,max);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        
        return solve(root,-1e18,1e18);
    }
};

// TC: O(N)
// SC: O(1)
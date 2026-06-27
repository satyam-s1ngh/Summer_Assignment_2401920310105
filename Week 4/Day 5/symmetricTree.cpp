class Solution {
public:
    bool f(TreeNode* a, TreeNode* b){
        if(a==nullptr&&b==nullptr) return true;
        if(a==nullptr||b==nullptr) return false;
        if(a->val!=b->val) return false;
        return f(a->left,b->right)&&f(a->right,b->left);
    }

    bool isSymmetric(TreeNode* root) {
        return f(root->left,root->right);
    }
};

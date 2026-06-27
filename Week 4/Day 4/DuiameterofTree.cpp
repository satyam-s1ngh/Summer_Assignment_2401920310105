class Solution {
public:
    int d=0;
    int h(TreeNode* root){
        if(root==nullptr) return 0;
        int l=h(root->left);
        int r=h(root->right);
        d=max(d,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        h(root);
        return d;
    }
};

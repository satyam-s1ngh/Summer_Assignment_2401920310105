class Solution {
public:
    unordered_map<int,int> mp;
    int i=0;
    TreeNode* solve(vector<int>& pre, vector<int>& in, int l, int r){
        if(l>r) return nullptr;
        TreeNode* root=new TreeNode(pre[i++]);
        int idx=mp[root->val];
        root->left=solve(pre,in,l,idx-1);
        root->right=solve(pre,in,idx+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return solve(preorder,inorder,0,inorder.size()-1);
    }
};

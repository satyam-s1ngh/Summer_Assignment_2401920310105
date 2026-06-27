class Codec {
public:
    void dfs(TreeNode* root,string &s){
        if(root==nullptr){
            s+="N,";
            return;
        }
        s+=to_string(root->val)+",";
        dfs(root->left,s);
        dfs(root->right,s);
    }
    string serialize(TreeNode* root) {
        string s="";
        dfs(root,s);
        return s;
    }
    TreeNode* build(vector<string>&v,int &i){
        if(v[i]=="N"){
            i++;
            return nullptr;
        }
        TreeNode* root=new TreeNode(stoi(v[i++]));
        root->left=build(v,i);
        root->right=build(v,i);
        return root;
    }
    TreeNode* deserialize(string data) {
        vector<string> v;
        string t="";
        for(char c:data){
            if(c==','){
                v.push_back(t);
                t="";
            }
            else t+=c;
        }
        int i=0;
        return build(v,i);
    }
};

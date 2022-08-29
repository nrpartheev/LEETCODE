vector<int> inorderTraversal(TreeNode* root) {
    if(root == NULL){
        return {} ;
    }
    else{
        vector<int> result;
        for(int i: inorderTraversal(root->left)){
            result.push_back(i);
        }
        result.push_back(root->val);
        for(int i: inorderTraversal(root->right)){
            result.push_back(i);
        }
        return result;
    }
}

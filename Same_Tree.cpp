bool isSameTree(TreeNode* p, TreeNode* q){
    if(p != NULL && q != NULL){
        if(p->val == q->val){
            if (isSameTree(p->left,q->left) && isSameTree(p->right,q->right)){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }
    else if(p == NULL && q == NULL){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}

def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
    if root == None:
        return []
    else:
        a=[]
        for i in self.inorderTraversal(root.left):
            a.append(i)
        a.append(root.val)
    for i in self.inorderTraversal(root.right):
        a.append(i)
    return a
    

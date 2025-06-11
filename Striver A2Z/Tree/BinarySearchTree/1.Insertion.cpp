

//Searching in BST 
//TC-O(logn) SC-O(n)
TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        if(root->val<val) return searchBST(root->right,val);
        return searchBST(root->left,val);
    }
//1: Preorder Traversal(using iterative appraoch)
 vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* current = st.top();
            st.pop();
            ans.push_back(current->val);
            if(current->right != NULL) st.push(current->right);
            if(current->left !=NULL) st.push(current->left);  
            }
            return ans;
    }
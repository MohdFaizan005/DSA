//Level Order Traversal all Approahes:

//1. Using a queue and a vector array to store different level node datas.
// TC = O(n) & SC = O(n)
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                 q.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
//2. Using queue only (we are printing the traversal on the go!)
// TC =O(n) & SC =O(w)  ::(w= maximum width)
void levelOrder2(TreeNode* root){
    if(root==NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();
        if(current==NULL){
            cout<<"\n";
            if(q.size()>0){
                q.push(NULL);
            }
        }
        else{
            cout<<current->data<<" ";
            q.push(current->left);
            q.push(current->right);
        }
    }
    return;
}
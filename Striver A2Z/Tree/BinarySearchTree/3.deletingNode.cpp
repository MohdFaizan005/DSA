
//Deleting a Node using iterative approach
// TC= O(H)  SC=O(1)
class Solution {
public:
    TreeNode* findLastRight(TreeNode* root){
        if(root->right==NULL) return root;
        return findLastRight(root->right);
    }
    TreeNode* helper(TreeNode* root){
        if(root->left==NULL) return root->right;
        else if(root->right ==NULL) return root->left;
        TreeNode* rightChild = root->right;
        TreeNode* lastRight = findLastRight(root->left);
        lastRight->right = rightChild;
        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return 0;
        if(key==root->val){
            return helper(root);
        }
        TreeNode* dummy = root;
        while(root!=NULL){
            if(key<root->val){
                if(root->left != NULL && root->left->val==key){
                    root->left= helper(root->left);
                    break;
                }else{
                    root = root->left;
                }
        }else{
            if(root->right != NULL && root->right->val==key){
                root->right = helper(root->right);
                break;
            }else{
                root = root->right;
            }
        }
        }
        return dummy;
    }
};
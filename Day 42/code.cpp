class Solution {
public:
    TreeNode* findMin(TreeNode* root) {
        while(root->left) root = root->left;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;

        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            if(!root->left && !root->right)
                return NULL;
            else if(!root->left)
                return root->right;
            else if(!root->right)
                return root->left;
            else {
                TreeNode* succ = findMin(root->right);
                root->val = succ->val;
                root->right = deleteNode(root->right, succ->val);
            }
        }
        return root;
    }
};

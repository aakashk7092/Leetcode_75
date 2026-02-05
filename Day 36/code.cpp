/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, long target){
        if(root == NULL) return 0 ;

        int cnt = 0 ;

        if(target == root->val) cnt++;

        cnt += dfs(root->left , target-root->val);
        cnt += dfs(root->right , target-root->val);
        return cnt;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;

        return dfs(root,targetSum) + pathSum(root->left,targetSum) + pathSum(root->right,targetSum);
    }
};

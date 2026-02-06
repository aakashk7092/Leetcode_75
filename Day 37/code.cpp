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
    int maxPath = 0;
    void solve(TreeNode* root , int r,int l){
        if(root == NULL) return;
        maxPath = max({maxPath ,r,l});
        solve(root->right,0,r+1);
        solve(root->left ,l+1,0);
    }
    int longestZigZag(TreeNode* root) {
        solve(root,0,0);
        return maxPath;
        
    }
};

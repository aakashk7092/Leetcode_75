class Solution {
public:
    int dfs(TreeNode* root,int maxV){
        if(root == NULL) return  0;
        int cnt = 0;
        if(root->val >= maxV){
            cnt  = 1;
            maxV = root->val;
        }
        cnt  += dfs(root->left,maxV);
        cnt += dfs(root->right,maxV);
        return cnt;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root , root->val);
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumval(struct TreeNode* root, int left)
{
int sum = 0;
    
    if(!root) return 0;
    
    if((root->left == 0) && (root->right == 0))
    {
        if(left)
        return root->val;
        else
            return 0;
    }
    sum += sumval(root->right, 0);
    sum += sumval(root->left, 1);
    return sum;
}

int sumOfLeftLeaves(struct TreeNode* root) {
    if(root)
    {
        return sumval(root, 0);
    }
    return 0;
}

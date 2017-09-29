/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {

    if(t1 == 0) return t2;
    if(t2 == 0) return t1;

    if(t1 && t2)
    {
        t1 -> val += t2 -> val;

        if((t1 -> left == 0) && (t2 -> left))
        {
            t1->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            memset (t1->left, 0 , sizeof(struct TreeNode));
        }
        mergeTrees(t1 -> left, t2 -> left);

       if((t1 -> right == 0) && (t2 -> right))
        {
            t1->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            memset (t1->right, 0 , sizeof(struct TreeNode));
        }
        mergeTrees(t1 -> right, t2 -> right);
    }

    return t1;
}

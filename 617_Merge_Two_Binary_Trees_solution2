/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if(t1 != 0)
    {
        if(t2 != 0)
        {
            t1 -> val += t2 -> val;

            t1 -> left = mergeTrees(t1 -> left, t2 -> left);
            t1 -> right = mergeTrees(t1 -> right, t2 -> right);
        }
    }
    else
    {
        if(t2 != 0) 
        {
            t1 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            memset(t1, 0,sizeof(struct TreeNode));
            t1 -> val = t2 -> val;
            t1 -> left = mergeTrees(t1 -> left, t2 -> left);
            t1 -> right = mergeTrees(t1 -> right, t2 -> right);
        }
    }

    return t1;
}

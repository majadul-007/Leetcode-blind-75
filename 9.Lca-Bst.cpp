/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {


        if (root == NULL) {
            return NULL;
        }
        int curr = root->val;

        //checking updated current value greater then p,q value then traverse left recursively and update the root

        if (curr > p->val && curr > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        //checking updated current value smaller p, q value then traverse right recursively and update the root
        else if (curr < p->val && curr < q->val) {

            return lowestCommonAncestor(root->right, p, q);
        }

        //base point

        return root;




    }
};
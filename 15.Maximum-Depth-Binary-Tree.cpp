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
    int maxDepth(TreeNode* root) {

        //check if root node is null or not

        if(root==NULL){
            return 0;
        }

        //traverse the left and right subtree

        int lt = maxDepth(root->left);
        int rt = maxDepth(root->right);

        //return the max value from root  node

        return max(lt, rt) + 1;
        
    }
};
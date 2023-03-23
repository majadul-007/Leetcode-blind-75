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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        depth(root, ans);
        return ans;
    }
    private:
     int depth(TreeNode* node, int& ans){
         if(node==NULL){
             return 0;
         }

         int left = depth(node->left, ans);
         int right = depth(node->right, ans);

         ans = max(ans, left+right);

         return 1 + max(left, right);
         
     
        
    }


};
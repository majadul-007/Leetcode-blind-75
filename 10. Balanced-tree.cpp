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

	int checkHeight(TreeNode* root) {

		//checking root null or not

		if (root == NULL) {
			return 0;
		}

		//store the left height
		int left = checkHeight(root->left);

		if (left == -1) {
			return -1;
		}

		//store the right subtree height
		int right = checkHeight(root->right);

		if (right == -1) {
			return -1;
		}

		//calculating absoulte difference of left and right greater than 1 or not
		
		if (abs(left - right) > 1) {
			return -1;
		}
		else {

			// find out the max height between left, right subtree
			return max(left, right) + 1;
		}



	}

	bool isBalanced(TreeNode* root) {



		return checkHeight(root) != -1;

	}
};
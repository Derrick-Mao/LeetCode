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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        return dfsHeight(root) != -1;
    }

private:
    int dfsHeight(TreeNode* curr) {
        if (curr == nullptr) {
            return 0;
        }

        int leftH = dfsHeight(curr->left);
        int rightH = dfsHeight(curr->right);
        if (leftH == -1 || rightH == -1 || abs(leftH - rightH) > 1) {
            return -1;
        }

        return max(leftH, rightH) + 1;
    }
};
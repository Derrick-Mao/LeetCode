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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* sortedArrayToBSTHelper(vector<int>& arr, int low, int high) {
        if (low > high) {
            return nullptr;
        }

        int mid = (low + high) / 2;
        TreeNode* root = new TreeNode(arr.at(mid));

        root->left = sortedArrayToBSTHelper(arr, low, mid - 1);
        root->right = sortedArrayToBSTHelper(arr, mid + 1, high);

        return root;
    }
};
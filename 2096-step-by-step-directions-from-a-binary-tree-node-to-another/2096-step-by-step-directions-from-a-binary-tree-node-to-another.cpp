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
    TreeNode* lca(TreeNode* root, int p, int q) {
        if (root == nullptr || root->val == p || root->val == q) {
            return root;
        }
        TreeNode* left = lca(root->left, p, q);
        TreeNode* right = lca(root->right, p, q);
        if (left != nullptr && right != nullptr) {
            return root;
        }
        return (left != nullptr) ? left : right;
    }

    string toStart, toEnd;

    void solve(TreeNode* node, string& pathString, int p, int q) {
        if (node == nullptr) {
            return;
        }
        if (node->val == p) {
            toStart = pathString;
        }
        if (node->val == q) {
            toEnd = pathString;
        }
        pathString.push_back('L');
        solve(node->left, pathString, p, q);
        pathString.pop_back();
        pathString.push_back('R');
        solve(node->right, pathString, p, q);
        pathString.pop_back();
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* l = lca(root, startValue, destValue);
        string pathString = "";
        solve(l, pathString, startValue, destValue);
        for (auto& ch : toStart) {
            ch = 'U';
        }
        return toStart + toEnd;
    }
};

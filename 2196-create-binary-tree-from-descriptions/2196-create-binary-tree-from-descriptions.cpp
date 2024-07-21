class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_map<int, bool> hasParent;

        for (auto& des : descriptions) {
            int par = des[0];
            int child = des[1];
            int isLeft = des[2];

            TreeNode* parNode = nullptr;
            TreeNode* childNode = nullptr;

            if (mp.find(par) == mp.end()) {
                parNode = new TreeNode(par);
                mp[par] = parNode;
            } else {
                parNode = mp[par];
            }

            if (mp.find(child) == mp.end()) {
                childNode = new TreeNode(child);
                mp[child] = childNode;
            } else {
                childNode = mp[child];
            }

            if (isLeft) {
                parNode->left = childNode;
            } else {
                parNode->right = childNode;
            }

            hasParent[child] = true;
        }

        TreeNode* root = nullptr;
        for (auto& [nodeVal, node] : mp) {
            if (!hasParent[nodeVal]) {
                root = node;
                break;
            }
        }

        return root;
    }
};

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        if (root == nullptr) return answer;

        queue<TreeNode *> level;
        level.push(root);
        while (!level.empty()) {
            int len = level.size();

            for (int i = 0; i < len; i++) {
                TreeNode* node = level.front();
                level.pop();

                if (node->left != nullptr) {
                    level.push(node->left);
                }
                if (node->right != nullptr) {
                    level.push(node->right);
                }

                if (i == len - 1) {
                    answer.push_back(node->val);
                }
            }
        }

        return answer;
    }
};

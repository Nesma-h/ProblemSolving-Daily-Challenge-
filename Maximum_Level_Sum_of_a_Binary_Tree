
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

 // problem link -> https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/?envType=daily-question&envId=2026-01-06
class Solution {
public:
vector<long long> sum;
    int mx = -1, level = 1;

    void dfs(TreeNode* root, int lv) {
        if (!root) return;

        if (lv == sum.size())
            sum.push_back(0);

        sum[lv] += root->val;

        dfs(root->left, lv + 1);
        dfs(root->right, lv + 1);
    }
    int maxLevelSum(TreeNode* root) {
        dfs(root, 0);

        int ans = 0;
        for (int i = 1; i < sum.size(); i++) {
            if (sum[i] > sum[ans])
                ans = i;
        }
        return ans + 1;
    }
};

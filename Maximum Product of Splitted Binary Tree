
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

 //problem link --> https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/description/?envType=daily-question&envId=2026-01-07
class Solution {
public:
long long total ,mx=-922337203685477;
    int calculate(TreeNode* root){
        if(!root){
            return 0;
        }
       
       long long sum = root->val + calculate(root->left) + calculate(root->right);
       mx=max(mx,sum * (total-sum));
        return sum;

    }
    int maxProduct(TreeNode* root) {
        total=calculate(root);
        calculate(root);
        
        return mx % 1000000007;   
    }
};

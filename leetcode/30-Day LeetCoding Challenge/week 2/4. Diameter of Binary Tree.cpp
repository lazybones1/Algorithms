/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int big = 0;
    int findLength(TreeNode* node){
        if(node != NULL){
            int left = findLength(node->left);
            int right = findLength(node->right);

            big = std::max(big, left + right);
            return 1+std::max(left,right);
        }
        else return 0;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        findLength(root);
        return big;
    }
};

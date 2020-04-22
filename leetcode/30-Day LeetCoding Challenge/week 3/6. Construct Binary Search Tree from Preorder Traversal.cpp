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
    TreeNode* insertnode(TreeNode* node, int n){
        if(node == NULL){
            TreeNode* node=new TreeNode(n);
            return node;
        }
        else if(node->val > n){
             node->left = insertnode(node->left, n);
        }
        else if(node->val < n){
             node->right = insertnode(node->right, n);
        }
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* node= NULL;
        for(int i=0; i<preorder.size(); i++){
            node = insertnode(node, preorder[i]);
        }
        return node;
    }
};

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *newNode = new TreeNode(val);
        if(!root) return newNode;
        TreeNode *ptr = root;
        TreeNode *par = ptr;
        while(ptr!=NULL){
            par=ptr;
            if(newNode->val<ptr->val) ptr=ptr->left;
            else ptr=ptr->right;
        }
    if(newNode->val<par->val) par->left=newNode;
    else par->right=newNode;
    return root;
    }
};
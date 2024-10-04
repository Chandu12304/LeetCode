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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        TreeNode *ptr1= nullptr;
        TreeNode *ptr2=root;
        TreeNode *ptr3=nullptr;
        TreeNode *ptr4=nullptr;
        while( ptr2!=NULL && ptr2->val!=key){
            ptr1=ptr2;
            if(key<ptr2->val) ptr2=ptr2->left;
            else ptr2=ptr2->right;
        }
        if(ptr2==NULL) return root;
        //case1:-
        if(ptr2->left ==NULL && ptr2->right==NULL){
            if(ptr1){ // edge case if root is to be deleted
                if(ptr1->left==ptr2) ptr1->left=nullptr;
                else ptr1->right=nullptr;
            }
            else return nullptr;
        }
        //case2:-
        else if(ptr2->left!=NULL && ptr2->right==NULL){
            if(ptr1){
                if(ptr1->left==ptr2) ptr1->left=ptr2->left;
                else ptr1->right = ptr2->left;
            }
            else return ptr2->left;
        }
        else if(ptr2->left==NULL && ptr2->right!=NULL){
            if(ptr1){
                if(ptr1->left==ptr2) ptr1->left=ptr2->right;
                else ptr1->right = ptr2->right;
            }
            else return ptr2->right;
        }
        //case3:-
        else{
            ptr3=ptr2->left;
            ptr4=ptr2->right;
            while(ptr4->left!=NULL) ptr4=ptr4->left;
            ptr4->left=ptr3;
            if(ptr1){
                if(ptr1->left==ptr2) ptr1->left=ptr2->right;
                else ptr1->right = ptr2->right;
            }
            else return  ptr2->right;
        }
        delete(ptr2);
        return root;
    }
};
